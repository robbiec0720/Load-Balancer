#include "IPAddress.h"

/**
 * @brief Returns the parts of the IPAddress.
 *
 * @return The parts of the IPAddress.
 */
int* IPAddress::getParts() {
    return parts;
}

/**
 * @brief Constructs a new IPAddress.
 *
 * The parts of the IPAddress are initialized to random values between 0 and 255.
 */
IPAddress::IPAddress() {
    int max = 256;
    for(int i = 0; i < 4; i++) {
        parts[i] = rand() % max;
    }
}

/**
 * @brief Outputs the IPAddress to an output stream.
 *
 * @param os The output stream.
 * @param ipa The IPAddress to output.
 * @return The output stream.
 */
std::ostream& operator<<(std::ostream& os, IPAddress& ipa) {
    os << ipa.parts[0] << "." << ipa.parts[1] << "." << ipa.parts[2] << "." << ipa.parts[3];
    return os;
}
