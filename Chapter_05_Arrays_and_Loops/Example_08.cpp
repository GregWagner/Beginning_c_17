// Using the continue statement to display ASCII character codes
#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits>

int main()
{
    // output column headings
    std::cout << std::setw(11) << "Character" << std::setw(13) << "Hexadecimal"
        << std::setw(9) << "Decimal" << '\n';
    std::cout << std::uppercase;                    // upprtcase hex

    unsigned char ch {};
    do {
        if (!std::isprint(ch)) {
            continue;
        }
        std::cout << std::setw(6) << ch
            << std::hex << std::setw(13) << static_cast<int>(ch)
            << std::dec << std::setw(9) << static_cast<int>(ch) <<'\n';
    } while (ch++ < std::numeric_limits<unsigned char>::max());
}
