#include "Request.h"

using namespace std;

Request::Request() {
    time = rand() % 5 + 1;
    in = IPAddress();
    out = IPAddress();
}