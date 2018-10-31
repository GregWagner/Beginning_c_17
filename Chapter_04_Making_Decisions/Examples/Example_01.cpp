// Comparing data values
// Chapter 4 Page 91
#include <iostream>

int main()
{
    char first {};
    std::cout << "Enter a character: ";
    std::cin >> first;

    char second {};
    std::cout << "enter a second character: ";
    std::cin >> second;

    std::cout << std::boolalpha;
    std::cout << "The value of the expression " << first << " < " << second
        << " is: " << (first < second) << '\n';
    std::cout << "The value of the expression " << first << " == " << second
        << " is: " << (first == second) << '\n';
}
