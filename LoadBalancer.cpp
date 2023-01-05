#include "LoadBalancer.h"

using namespace std;

/**
 * @brief Returns true if the request queue is empty, false otherwise.
 *
 * @return True if the request queue is empty, false otherwise.
 */
bool LoadBalancer::is_empty() {
    return request_queue.empty();
}

/**
 * @brief Assigns a request from the request queue to a server.
 *
 * If no server is available, the request is discarded.
 *
 * @param t The current time.
 */
void LoadBalancer::assign_request(int t) {
    bool full = true;
    for(int i = 0; i < server_list.size(); i++) {
        if(server_list[i].poll(t) && !is_empty()) {
            server_list[i].process_request(request_queue.front(), t);
            request_queue.pop();
            full = false;
        }
    }
    if(full) {
        // Discard request
    }
}

/**
 * @brief Handles a request by adding it to the request queue.
 *
 * If the request queue is full, the request is discarded.
 *
 * @param r The request to handle.
 * @param t The current time.
 */
void LoadBalancer::handle_request(Request r, int t) {
    if(request_queue.size() == capacity) {
        // Discard request
    }
    else {
        request_queue.push(r);
    }
}

/**
 * @brief Adds a web server to the load balancer.
 *
 * @param ws The web server to add.
 */
void LoadBalancer::add_web_server(WebServer ws) {
    server_list.push_back(ws);
}

/**
 * @brief Constructs a new LoadBalancer with the given capacity.
 *
 * @param desired_capacity The maximum number of servers the load balancer can manage.
 */
LoadBalancer::LoadBalancer(int desired_capacity) {
    capacity = desired_capacity;
}

/**
 * @brief Returns the number of servers managed by the load balancer.
 *
 * @return The number of servers managed by the load balancer.
 */
int LoadBalancer::get_size() {
    return request_queue.size();
}
