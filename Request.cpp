#include "Request.h"

Request::Request() {
    srand(time(NULL));
    process_time = rand() % 499 + 2;
    in = IPAddress();
    out = IPAddress();
}

int Request::getTime() {
    return process_time;
}