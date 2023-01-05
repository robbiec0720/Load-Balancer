#include "WebServer.h"

using namespace std;

WebServer::WebServer(int id) {
    time_free = 0;
    my_id = id;
}

void WebServer::process_request(Request r, int current_time) {
    int time_for_request = r.get_time();
    time_free = current_time + time_for_request;
    current_request = r;
}

bool WebServer::poll(int current_time) {
    if(current_time >= time_free) {
        cout << "At " << current_time << " Server " << my_id << " finished processing request from ";// << current_request.get_in() << " to " << current_request.get_out() << endl;
        return true;
    }
    return false;
}