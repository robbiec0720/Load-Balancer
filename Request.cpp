#include "Request.h"

/**
 * @brief Constructs a new Request.
 *
 * The processing time, source address, and destination address are initialized to random values.
 */
Request::Request() {
    process_time = rand() % 499 + 2;
    in = IPAddress();
    out = IPAddress();
}

/**
 * @brief Returns the processing time of the request.
 *
 * @return The processing time of the request.
 */
int Request::get_time() {
    return process_time;
}

/**
 * @brief Returns a reference to the source address of the request.
 *
 * @return A reference to the source address of the request.
 */
IPAddress& Request::get_in() {
    return in;
}

/**
 * @brief Returns a reference to the destination address of the request.
 *
 * @return A reference to the destination address of the request.
 */
IPAddress& Request::get_out() {
    return out;
}
