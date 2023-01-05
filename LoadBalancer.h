#pragma once

#include "Request.h"
#include "WebServer.h"
#include <queue>
#include <vector>
#include <iostream>

using namespace std;

/**
 * @brief A class representing a load balancer.
 *
 * This class stores a list of web servers and a queue of requests, and provides
 * methods for adding servers, handling requests, and assigning requests to servers.
 */
class LoadBalancer {
private:
    /**
     * @var capacity The maximum number of servers the load balancer can manage.
     */
    int capacity;

    /**
     * @var request_queue The queue of requests waiting to be processed.
     */
    queue<Request> request_queue;

    /**
     * @var server_list The list of servers managed by the load balancer.
     */
    vector<WebServer> server_list;

public:
    /**
     * @brief Constructs a new LoadBalancer with the given capacity.
     *
     * @param desiredCapacity The maximum number of servers the load balancer can manage.
     */
    LoadBalancer(int desiredCapacity);

    /**
     * @brief Adds a web server to the load balancer.
     *
     * @param ws The web server to add.
     */
    void add_web_server(WebServer ws);

    /**
     * @brief Returns true if the request queue is empty, false otherwise.
     *
     * @return True if the request queue is empty, false otherwise.
     */
    bool is_empty();

    /**
     * @brief Handles a request by adding it to the request queue.
     *
     * @param r The request to handle.
     * @param t The current time.
     */
    void handle_request(Request r, int t);

    /**
     * @brief Assigns a request from the request queue to a server.
     *
     * @param t The current time.
     */
    void assign_request(int t);

    /**
     * @brief Returns the number of servers managed by the load balancer.
     *
     * @return The number of servers managed by the load balancer.
     */
    int get_size();
};