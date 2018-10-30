/*
 * Exercise 3.4
 * Reads 4 characters and packs them infor a single integer
 */
#include <iostream>

int main()
{
    unsigned packed {};
    std::cout << "Enter 4 characters: ";

    bool first_time = true;
    for (int i = 0; i < 4; ++i) {
        if (first_time) {
            first_time = false;
        } else {
            packed <<= 8;
        }
        char c {};
        std::cin >> c;
        packed |= c;
    }

    std::cout << "Packed characters: " << std::showbase << std::hex
        << packed << '\n';

    for (int i = 0; i < 4; ++i) {
        char c = packed & 0xFF;
        std::cout << static_cast<char>(c) << ' ';
        packed >>= 8;
    }
    std::cout << '\n';
}
