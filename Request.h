#pragma once

#include "IPAddress.h"

/**
 * @brief A class representing a request.
 *
 * This class stores the processing time and source and destination addresses of a request.
 */
class Request {
private:
    /**
     * @var process_time The processing time of the request.
     */
    int process_time;

    /**
     * @var in The source address of the request.
     */
    IPAddress in;

    /**
     * @var out The destination address of the request.
     */
    IPAddress out;

public:
    /**
     * @brief Constructs a new Request.
     *
     * The processing time, source address, and destination address are initialized to random values.
     */
    Request();

    /**
     * @brief Returns the processing time of the request.
     *
     * @return The processing time of the request.
     */
    int get_time();

    /**
     * @brief Returns a reference to the source address of the request.
     *
     * @return A reference to the source address of the request.
     */
    IPAddress& get_in();

    /**
     * @brief Returns a reference to the destination address of the request.
     *
     * @return A reference to the destination address of the request.
     */
    IPAddress& get_out();
};
