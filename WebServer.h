#pragma once

#include "Request.h"

class WebServer {
    private:
        int timeFree;
    public:
        WebServer();
        void solicitRequest(); // NOTE unused so far

        // simulates the web server processing a request
        void processRequest(Request r, int currentTime);

        // we poll the web server every time cycle from our load balancer
        // true if free, else false
        bool poll(int currentTime);
};