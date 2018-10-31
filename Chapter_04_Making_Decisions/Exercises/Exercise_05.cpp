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

    if (mice == 1) {
        std::cout << "It is a " << (brown ? "brown" : "white")
            << " mouse.\n";
    } else {
        std::cout << "Of these, " << brown
            << (brown == 1 ? " is a brown mouse.\n" : 
                    " are brown mice.\n");
    }
}
