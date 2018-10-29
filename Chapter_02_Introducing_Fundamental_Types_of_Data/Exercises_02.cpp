// Exercise 2 Chapter 2
// Computes the area of a circle and allows user to enter the number of 
// digits to display
#include <iostream>
#include <iomanip>

int main()
{
    const double PI {3.141592653589793238};
    double radius {};
    std::cout << "Enter the radius of a circle: ";
    std::cin >> radius;

    int precision {};
    std::cout << "Enter the number of digits to display: ";
    std::cin >> precision;

    const double area = PI * radius * radius;

    std::cout << "Area: " << std::setprecision(precision) << area << '\n';
}
