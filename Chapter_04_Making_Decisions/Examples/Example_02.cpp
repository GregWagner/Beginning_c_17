// Using an if statement
// Chapter 4 Page 94
#include <iostream>

int main()
{
    int value {};
    std::cout << "Enter an integer between 50 and 100: ";
    std::cin >> value;

    if (value) {
        std::cout << "You have entered a value that is different from zero.\n";
    }
    if (value < 50) {
        std::cout << "The value is invalid - it is less than 50.\n";
    }
    if (value > 100) {
        std::cout << "The value is invalid - it is greater than 100.\n";
    }
    std::cout << "You entered " << value << '\n';
}
