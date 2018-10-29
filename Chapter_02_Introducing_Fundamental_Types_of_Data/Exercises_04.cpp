// Exercise 4 Chapter 2
// Calculates the height of a tree
#include <iostream>
#include <cmath>

int main()
{
    int eye_height {};
    std::cout << "Enter the height of your eye (in inches): ";
    std::cin >> eye_height;

    int feet {};
    int inches {};
    std::cout << "Enter the distance from the tree (feet and inches): ";
    std::cin >> feet >> inches;

    const int INCHES_PER_FOOT {12};
    const int distance_from_tree {inches + (feet * INCHES_PER_FOOT)};

    int angle {};
    std::cout << "Enter the angle between the horizontal and the tree";
    std::cin >> angle;

    const double tree_height {eye_height + distance_from_tree * std::tan(angle)};

    feet = tree_height / INCHES_PER_FOOT;
    inches = static_cast<int>(tree_height) % INCHES_PER_FOOT;
    std::cout << "The tree height is " << feet << " feet, "
        << inches << " inches\n";
}
