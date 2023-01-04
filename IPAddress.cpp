#include "IPAddress.h"

int* IPAddress::getParts() {
    return parts;
}

IPAddress::IPAddress() {
    for(int i = 0; i < 4; i++) {
        parts[i] = 123; // TODO change this to a random number
    }
}

// #include <iostream>
// int main() {
//     IPAddress ipa;
//     std::cout << ipa << std::endl;
// }