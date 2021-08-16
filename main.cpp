#include <iostream>

#include "cHex.hpp"

int main()
{
    std::string hex = cHex::bin2hex("string");
    std::cout << hex << std::endl;

    std::string bin = cHex::hex2bin(hex);
    std::cout << bin << std::endl;

    system("pause");
}
