/*
 * Exercise 3.1
 * Bit manipulation
 */
#include <iostream>
#include <iomanip>

int main()
{
    unsigned num {};
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    unsigned inv = ~num;

    std::cout 
        << std::setfill('0') << std::hex << "\nOrginal number:      0x"
        << std::setw(8) << num << '\n'
        << std::setfill(' ') << std::dec << "                       "
        << std::setw(8) << num << '\n'
        << std::setfill('0') << std::hex << "Inverted number:     0x"
        << std::setw(8) << inv << '\n'
        << std::setfill(' ') << std::dec << "                     "
        << std::setw(8) << inv << '\n'
        << std::setfill('0') << std::hex << "Inverted number + 1: 0x"
        << std::setw(8) << inv + 1 << '\n'
        << std::setfill(' ') << std::dec << "                     "
        << std::setw(8) << inv + 1 << '\n';
}

