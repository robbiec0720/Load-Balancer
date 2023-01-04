#pragma once
#include <iostream>

class IPAddress {
    private:
        int parts[4];
    public:
        int* getParts();
        IPAddress();
        friend std::ostream& operator<<(std::ostream& os, IPAddress& ipa);
};