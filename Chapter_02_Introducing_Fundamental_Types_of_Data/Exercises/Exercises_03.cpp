// exercise 3 Chapter 2
// Converts inches to feet and inches
#include <iostream>

int main()
{
    const int INCHES_PER_FOOT {12};
    
    int inches {};
    std::cout << "Enter the number of inches: ";
    std::cin >> inches;

    const int feet = inches / INCHES_PER_FOOT;
    inches %= INCHES_PER_FOOT;

    std::cout << "Feet: " << feet << ", inches: " << inches << '\n';
}
