#include "Request.h"

Request::Request() {
    process_time = rand() % 499 + 2;
    in = IPAddress();
    out = IPAddress();
}

int Request::get_time() {
    return process_time;
}

IPAddress& Request::get_in() {
    return in;
}

IPAddress& Request::get_out() {
    return out;
}