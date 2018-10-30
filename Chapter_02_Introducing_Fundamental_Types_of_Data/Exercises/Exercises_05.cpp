// Exercise 5 Chapter 2
// Calculates BMI
#include <iostream>

int main()
{
    double weight;
    std::cout << "Enter weight (in pounds): ";
    std::cin >> weight;

    const double KG_PER_POUND {2.2};
    weight /= KG_PER_POUND;

    double feet {};
    double inches {};
    std::cout << "Enter height in feet and inches: ";
    std::cin >> feet >> inches;

    const double METERS_PER_FOOT {0.3048};
    const double INCHES_PER_FOOT {12};
    feet = feet + (inches / INCHES_PER_FOOT);
    const double height {feet * METERS_PER_FOOT};

    const double bmi = weight / (height * height);
    std::cout << "weight: " << weight << '\n';
    std::cout << "BMI: " << bmi << '\n';
}
