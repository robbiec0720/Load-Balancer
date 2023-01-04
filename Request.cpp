#include "Request.h"

Request::Request() {
    srand(time(NULL));
    process_time = rand() % 5 + 1;
    in = IPAddress();
    out = IPAddress();
}

int Request::getTime() {
    return process_time;
}