/*
 * Exercise 3.5
 * Swaps variables without a temporary
 */
#include <iostream>

int main()
{
    int a{}, b{};
    std::cout << "Enter 2 integers: ";
    std::cin >> a >> b;

    unsigned mask = a ^ b;

    a = a ^ mask;
    b = b ^ mask;

    std::cout << "swaped: " << a << ", " << b << '\n';
}
