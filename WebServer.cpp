#include "WebServer.h"

WebServer::WebServer() {
    timeFree = 0;
}

void WebServer::processRequest(Request r, int currentTime) {
    int timeForRequest = r.getTime();
    timeFree = currentTime + timeForRequest;
}

bool WebServer::poll(int currentTime) {
    if(currentTime >= timeFree) {
        return true;
    }
    return false;
}