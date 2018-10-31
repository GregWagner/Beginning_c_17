// Using the if-else statement
// Chapter 4 Page 100

#include <iostream>

int main()
{
    long number {};
    std::cout << "Enter an integer less than 2 billion: ";
    std::cin >> number;

    if (number % 2) {
        std::cout << "You number is odd.\n";
    } else {
        std::cout << "Your number is even.\n";
    }
}
