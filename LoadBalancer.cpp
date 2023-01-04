#include "LoadBalancer.h"

using namespace std;

bool LoadBalancer::is_empty() {
    return request_queue.empty();
}

void LoadBalancer::assign_request(int t) {
    for(int i = 0; i < server_list.size(); i++) {
        if(server_list[i].poll(t)) {
            server_list[i].processRequest(request_queue.front(), t);
            request_queue.pop();
            break;
        }
        if(i == server_list.size()-1) {
            cout << "Cycle " << t << ": All webservers are currently full" << endl;
        }
    }
}

void LoadBalancer::handle_request(Request r, int t) {
    if(request_queue.size() == capacity) {
        cout << "Cycle " << t << ": Process Queue is full, discarding request." << endl;
    }
    else {
        request_queue.push(r);
    }
}

void LoadBalancer::add_web_server(WebServer ws) {
    server_list.push_back(ws);
}

LoadBalancer::LoadBalancer(int desiredCapacity) {
    capacity = desiredCapacity;
}