#pragma once

#include "Request.h"
#include "IPAddress.h"
#include <iostream>

/**
 * Represents a web server in a load balancing simulation.
 *
 * The `WebServer` class stores information about a single web server, such as its current load and the time at which it will be free. It provides methods for processing requests and checking the server's availability.
 */
class WebServer {
    private:
        int time_free;
        int my_id;
        Request current_request;
    public:
        /**
         * Constructs a new web server with the given ID.
         *
         * @param[in] id The ID of the web server
         */
        WebServer(int id);


        /**
         * Processes a request for the web server.
         *
         * @param[in] r The request to be processed
         * @param[in] current_time The current time in the simulation
         * @see Request::get_time()
         */
        void process_request(Request r, int current_time); // simulates the web server processing a request

        /**
         * Polls the web server to check if it is currently free.
         *
         * @param[in] current_time The current time in the simulation
         * @return True if the web server is free, false otherwise
         */
        bool poll(int current_time);
        // we poll the web server every time cycle from our load balancer
        // true if free, else false
};