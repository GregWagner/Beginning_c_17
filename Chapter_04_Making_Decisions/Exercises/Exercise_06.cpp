#include <iostream>

int main()
{
    int number {};
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout  << "That number is "
        << (number <= 20 ? "less than or equal to 20.\n" :
                (number <= 30 ? "less than or equal to 30.\n" :
                 (number <= 100 ? "less than or equal to 100.\n" :
                  "greater than 100.\n")));
}
