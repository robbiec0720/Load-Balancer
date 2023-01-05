#include "IPAddress.h"
#include "Request.h"
#include "LoadBalancer.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

using namespace std;

int main(int argc, char* argv[]) {
    int opt;
    int num_webservers = 10;
    int capacity = 200;
    //int num_cycles = 10000;
    int prob_request = 5;

    while((opt = getopt(argc, argv, "w:c:p:")) != -1) {
        switch (opt) {
            case 'w':
                num_webservers = atoi(optarg);
                break;
            case 'c':
                capacity = atoi(optarg);
                break;
            /* case 't':
                num_cycles = atoi(optarg);
                break; */
            case 'p':
                prob_request = atoi(optarg);
        }
    }

    LoadBalancer balancer(capacity);
    for(int i = 0; i < num_webservers; i++) {
        balancer.add_web_server(WebServer());
    }

    for(int i = 0; i < capacity; i++) {
        balancer.handle_request(Request(), 0);
    }

    int cycle = 0;
    while(!balancer.is_empty()) {
        balancer.assign_request(cycle);

        srand(time(NULL));
        int n = rand() % 100;
        if(n < prob_request) {
            balancer.handle_request(Request(), cycle);
        }
        
        cycle++;
    }
}