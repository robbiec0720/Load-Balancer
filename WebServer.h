#pragma once

#include "Request.h"

class WebServer {
    private:
        int time_free;
    public:
        WebServer();

        // simulates the web server processing a request
        void processRequest(Request r, int current_time);

        // we poll the web server every time cycle from our load balancer
        // true if free, else false
        bool poll(int current_time);
};