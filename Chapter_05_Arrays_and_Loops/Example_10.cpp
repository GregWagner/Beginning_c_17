
#include <iostream>
#include <cctype>

int main()
{
    const int max_length {100};
    char text[max_length] {};

    std::cout << "Enter a line of text:\n";

    std::cin.getline(text, max_length);
    std::cout << "You entered:\n" << text << '\n';

    size_t vowels {};
    size_t consonants {};
    for (int i {}; text[i] != '\0'; ++i) {
        if (std::isalpha(text[i])) {
            switch (std::tolower(text[i])) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                    ++vowels;
                    break;
                default:
                    ++consonants;
            }
        }
    }
    std::cout << "You input contained " << vowels << " vowels and "
        << consonants << " consonants.\n";
}
