#include "WebServer.h"

WebServer::WebServer() {
    time_free = 0;
}

void WebServer::processRequest(Request r, int current_time) {
    int time_for_request = r.get_time();
    time_free = current_time + time_for_request;
}

bool WebServer::poll(int current_time) {
    if(current_time >= time_free) {
        //cout << "At " << current_time << " "
        return true;
    }
    return false;
}