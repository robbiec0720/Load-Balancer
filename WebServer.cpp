#include "WebServer.h"

using namespace std;

/**
 * @brief Constructs a new web server with the given ID.
 *
 * @param[in] id The ID of the web server
 */
WebServer::WebServer(int id) {
    time_free = 0;
    my_id = id;
}

/**
 * @brief Processes a request for the web server.
 *
 * @param[in] r The request to be processed
 * @param[in] current_time The current time in the simulation
 * @see Request::get_time()
 */
void WebServer::process_request(Request r, int current_time) {
    int time_for_request = r.get_time();
    time_free = current_time + time_for_request;
    current_request = r;
}

/**
 * @brief Polls the web server to check if it is currently free.
 *
 * @param[in] current_time The current time in the simulation
 * @return True if the web server is free, false otherwise
 */
bool WebServer::poll(int current_time) {
    if(current_time >= time_free) {
        if(current_time != 0) {
            cout << "At " << current_time << " Server " << my_id << " finished processing request from " << current_request.get_in() << " to " << current_request.get_out() << endl;
        }
        return true;
    }
    return false;
}