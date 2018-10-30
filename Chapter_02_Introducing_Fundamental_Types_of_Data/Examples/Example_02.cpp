// Converting distances
// Chapter 2 Page 38
#include <iostream>

int main()
{
    unsigned yards{}, feet {}, inches{};
    // convert a distance in yards, feet, and inches to inches
    std::cout << "Enter a distance as yards, feet, and inches with the three "
        << "values separated by spaces:\n";
    std::cin >> yards >> feet >> inches;

    const unsigned FEET_PER_YARD {3};
    const unsigned INCHES_PER_FOOT {12};

    unsigned total_inches = inches + (INCHES_PER_FOOT *
            (yards * FEET_PER_YARD + feet));
    std::cout << "The distances corresponds to " << total_inches << std::endl;

    // convert a distance in inches to yards, feet, and inches
    std::cout << "Enter a distance in inches: ";
    std::cin >> total_inches;
    feet = total_inches / INCHES_PER_FOOT;
    inches = total_inches % INCHES_PER_FOOT;
    yards = feet / FEET_PER_YARD;
    feet %= FEET_PER_YARD;
    std::cout << "The distance corresponds to " << yards << " yards, "
        << feet << " feet, and " << inches << " inches\n";
}
