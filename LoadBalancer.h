#pragma once

#include "Request.h"
#include <queue>
#include <vector>

using namespace std;

class LoadBalancer {
private:
    queue<Request> request_queue;
    vector<WebServer> server_list;

public:
    bool isEmpty();
    void handle_request();
    void assign_request();
}