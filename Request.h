#pragma once

#include "IPAddress.h"
#include <cstdlib>
#include <ctime>

class Request {
private:
    int process_time;
    IPAddress in;
    IPAddress out;

public:
    Request();
    int getTime();
};