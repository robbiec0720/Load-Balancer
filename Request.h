#pragma once

#include "IPAddress.h"
#include <stdlib.h>

class Request {
private:
    int time;
    IPAddress in;
    IPAddress out;
public:
    Request();
};