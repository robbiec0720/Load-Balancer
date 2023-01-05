#pragma once

#include "IPAddress.h"

class Request {
private:
    int process_time;
    IPAddress in;
    IPAddress out;
public:
    Request();
    int get_time();
    IPAddress get_in();
    IPAddress get_out();
};