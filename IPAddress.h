#pragma once

class IPAddress {
    private:
        int parts[4];
    public:
        int* getParts();
        IPAddress();
};