#pragma once

#include "Request.h"
#include "WebServer.h"
#include <queue>
#include <vector>
#include <iostream>

using namespace std;

class LoadBalancer {
private:
    int capacity;
    queue<Request> request_queue;
    vector<WebServer> server_list;
public:
    LoadBalancer(int desiredCapacity);
    void add_web_server(WebServer ws);
    bool is_empty();
    void handle_request(Request r, int t);
    void assign_request(int t);
};