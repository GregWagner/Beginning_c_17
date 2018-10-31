#include <iostream>

int main()
{
    int number {};
    std::cout << "Enter a number between 1 and 100: ";
    std::cin >> number;

    if (number >= 1 && number <= 100) {
        if (number > 50) {
            std::cout << number << " is greater than 50.\n";
        } else if (number < 50) {
            std::cout << number << " is less than 50.\n";
        } else {
            std::cout << number << " is equal to 50.\n";
        }
    } else {
        std::cout << number << " is not between 1 and 100.\n";
    }
}
