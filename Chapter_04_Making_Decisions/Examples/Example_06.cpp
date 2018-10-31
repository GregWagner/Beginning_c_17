// Using the conditional operator to select output.
// Chapter 4 Page 111

#include <iostream>

int main()
{
    int brown {};
    std::cout << "How many brown mice to you have? ";
    std::cin >> brown;

    int white {};
    std::cout << "How many white mice do you have? ";
    std::cin >> white;

    int mice {brown + white};

    std::cout << "You have " << mice
        << (mice == 1 ? " mouse" : " mice")
        << " in total.\n";
}

