#include "Request.h"
#include <iostream>

using namespace std;

Request::Request() {
    srand(time(NULL));
    process_time = rand() % 5 + 1;
    cout << process_time << endl;
    in = IPAddress();
    out = IPAddress();
}