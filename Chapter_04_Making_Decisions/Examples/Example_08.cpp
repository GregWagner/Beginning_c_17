// Multiple case actions
// Chapter 4 Page 114

#include <iostream>

int main()
{
    char letter {};
    std::cout << "Enter a letter: ";
    std::cin >> letter;

    if (std::isalpha(letter)) {
        switch (std::tolower(letter)) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                std::cout << "You entered a vowel.\n";
                break;
            default:
                std::cout << "You entered a consonant.\n";
                break;
        }
    } else {
        std::cout << "You did not enter a letter.\n";
    }
}
