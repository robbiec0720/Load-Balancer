#include "IPAddress.h"

int* IPAddress::getParts() {
    return parts;
}

IPAddress::IPAddress() {
    srand(time(NULL));
    int max = 256;
    for(int i = 0; i < 4; i++) {
        parts[i] = rand() % max;
    }
}

std::ostream& operator<<(std::ostream& os, IPAddress& ipa) {
    os << ipa.parts[0] << "." << ipa.parts[1] << "." << ipa.parts[2] << "." << ipa.parts[3];
    return os;
}