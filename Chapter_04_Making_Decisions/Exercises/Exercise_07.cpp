#include <iostream>

int main()
{
    char letter {};
    std::cout << "Emter a letter: ";
    std::cin >> letter;

    if (!std::isalpha(letter)) {
        std::cout << "You did not enter a letter.\n";
        return 0;
    }

    std::cout << "That letter is " << 
        (std::islower(letter) ? "lower case.\n" : "upper case.\n");

    switch (std::tolower(letter)) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            std::cout << "You entered a vowel.\n";
            break;
        default:
            std::cout << "You entered a constant.\n";
            break;
    }

    std::cout << (letter & 0b1000'0000 ? "1" : "0");
    std::cout << (letter & 0b0100'0000 ? "1" : "0");
    std::cout << (letter & 0b0010'0000 ? "1" : "0");
    std::cout << (letter & 0b0001'0000 ? "1" : "0");
    std::cout << (letter & 0b0000'1000 ? "1" : "0");
    std::cout << (letter & 0b0000'0100 ? "1" : "0");
    std::cout << (letter & 0b0000'0010 ? "1" : "0");
    std::cout << (letter & 0b0000'0001 ? "1\n" : "0\n");
}
