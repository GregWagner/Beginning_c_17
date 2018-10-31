// Using the switch statement
// Chapter 4 Page 113

#include <iostream>

int main()
{
    int choice {};
    std::cout << "Your electronic recipe book is at your service.\n"
        << "You can choose from the following delicious dished:\n"
        << "1  Boiled eggs\n"
        << "2  Fried eggs\n"
        << "3  Scrambled eggs\n"
        << "4  Coddled eggs\n\n"
        << "Enter your selection number: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Boil some eggs.\n";
            break;
        case 2:
            std::cout << "Fry some eggs.\n";
            break;
        case 3:
            std::cout << "Scramble some eggs.\n";
            break;
        case 4:
            std::cout << "Coddle some eggs.\n";
            break;
        default:
            std::cout << "You entered a wrong number - try raw eggs.\n";
            break;
    }
}
