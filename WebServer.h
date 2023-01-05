#pragma once

#include "Request.h"
#include "IPAddress.h"
#include <iostream>

/**
 * @brief A class representing a web server.
 *
 * This class stores the current state of the web server and provides methods
 * for processing requests and checking the status of the server.
 */
class WebServer {
private:
    /**
     * @var time_free The time at which the server will be free.
     */
    int time_free;

    /**
     * @var my_id The ID of the server.
     */
    int my_id;

    /**
     * @var current_request The request currently being processed by the server.
     */
    Request current_request;

public:
    /**
     * @brief Constructs a new WebServer with the given ID.
     *
     * @param id The ID of the server.
     */
    WebServer(int id);

    /**
     * @brief Processes a request on the server.
     *
     * @param r The request to process.
     * @param current_time The current time.
     */
    void process_request(Request r, int current_time);

    /**
     * @brief Returns true if the server is free at the given time, false otherwise.
     *
     * @param current_time The current time.
     * @return True if the server is free at the given time, false otherwise.
     */
    bool poll(int current_time);
};
