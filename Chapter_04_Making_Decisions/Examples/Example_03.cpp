// Using a nested if (refactored)
// Chapter 4 Page 119

#include <iostream>

int main()
{
    char letter {};
    std::cout << "Enter a letter: ";
    std::cin >> letter;

    if (std::isupper(letter)) {
        std::cout << "You entered an upper case letter.\n";
    } else if (std::islower(letter)) {
        std::cout << "You entered an lower case letter.\n";
    } else {
        std::cout << "You did not enter a letter.\n";
    }
}
