/*
 * Exercise 3-5
 */
#include <iostream>
#include <iomanip>

int main()
{
    const unsigned RED_MASK = 0xFF0000;
    const unsigned GREEN_MASK = 0x00FF00;
    const unsigned BLUE_MASK = 0x0000FF;

    enum class Color : unsigned {Red = 0xFF0000, Green = 0x00FF00,
        Yellow = 0xFFFF00, Purple = 0xFF00FF, Blue = 0x0000FF,
        Black = 0x000000, White = 0xFFFFFF};

    Color yellow = Color::Yellow;
    Color purple = Color::Purple;
    Color green = Color::Green;

    std::cout << std::hex << std::setfill('0');

    unsigned red_part = static_cast<unsigned>(yellow) & RED_MASK;
    unsigned green_part = static_cast<unsigned>(yellow) & GREEN_MASK;
    unsigned blue_part = static_cast<unsigned>(yellow) & BLUE_MASK;

    std::cout << "Yellow\t" << std::setw(8) << red_part
        << "\t" << std::setw(8) << green_part
        << "\t" << std::setw(8) << blue_part << '\n';

    red_part = static_cast<unsigned>(purple) & RED_MASK;
    green_part = static_cast<unsigned>(purple) & GREEN_MASK;
    blue_part = static_cast<unsigned>(purple) & BLUE_MASK;
    std::cout << "Purple\t" << std::setw(8) << red_part
        << "\t" << std::setw(8) << green_part
        << "\t" << std::setw(8) << blue_part << '\n';

    red_part = static_cast<unsigned>(green) & RED_MASK;
    green_part = static_cast<unsigned>(green) & GREEN_MASK;
    blue_part = static_cast<unsigned>(green) & BLUE_MASK;
    std::cout << "Green\t" << std::setw(8) << red_part
        << "\t" << std::setw(8) << green_part
        << "\t" << std::setw(8) << blue_part << '\n';
}
