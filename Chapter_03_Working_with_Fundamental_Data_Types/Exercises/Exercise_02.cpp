/*
 * Exercise 3-2
 */
#include <iostream>

int main()
{
    const int INCHES_PER_FOOT {12};

    double width {}, length {};
    std::cout << "Enter width and length of shelf (in feet): ";
    std::cin >> width >> length;

    // convert to inches
    width *= INCHES_PER_FOOT;
    length *= INCHES_PER_FOOT;

    int side {};
    std::cout << "Enter the length of the side of the box (in inches): ";
    std::cin >> side;

    int number_of_boxes {};
    if (side <= width && side <= length) {
        number_of_boxes = (width / side) * (length / side);
    }
    std::cout << "You can fit " << number_of_boxes
        << (number_of_boxes == 1 ? " box" : " boxes")
        << " on the shelf\n";
}
