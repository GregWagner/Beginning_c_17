// Using explicit type conversions
// Chapter 2 Page 55
#include <iostream>

int main()
{
    const unsigned FEET_PER_YARD {3};
    const unsigned INCHES_PER_FOOT {12};

    double length {};
    std::cout << "Enter a length in yards as a decimal: ";
    std::cin >> length;

    const unsigned yards = static_cast<unsigned>(length);
    const unsigned feet = static_cast<unsigned>((length - yards) *
            FEET_PER_YARD);
    const unsigned inches = static_cast<unsigned>(length * FEET_PER_YARD
            * INCHES_PER_FOOT) % INCHES_PER_FOOT;

    std::cout << length  << " yards converts to " << yards << " yards "
        << feet << " feet " << inches << " inches.\n";
}
