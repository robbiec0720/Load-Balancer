#pragma once

#include <iostream>

/**
 * @brief A class representing an IPv4 address.
 *
 * This class stores the parts of an IPv4 address (the octets) and provides
 * methods for working with the address.
 */
class IPAddress {
private:
    /**
     * @var parts The parts (octets) of the IPv4 address.
     */
    int parts[4];

public:
    /**
     * @brief Returns the parts of the IPAddress.
     *
     * @return The parts of the IPAddress.
     */
    int* getParts();

    /**
     * @brief Constructs a new IPAddress.
     *
     * The parts of the IPAddress are initialized to random values between 0 and 255.
     */
    IPAddress();

    /**
     * @brief Outputs the IPAddress to an output stream.
     *
     * @param os The output stream.
     * @param ipa The IPAddress to output.
     * @return The output stream.
     */
    friend std::ostream& operator<<(std::ostream& os, IPAddress& ipa);
};
