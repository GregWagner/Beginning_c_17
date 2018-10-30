// Exercise 1 Chapter 2
// Computes the area of a circle
#include <iostream>

int main()
{
    const double PI {3.14};
    double radius {};
    std::cout << "Enter the radius of a circle: ";
    std::cin >> radius;

    const double area = PI * radius * radius;

    std::cout << "Area: " << area << '\n';
}
