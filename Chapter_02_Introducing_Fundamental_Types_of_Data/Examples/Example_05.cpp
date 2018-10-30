// Finding maximum and minimum valuesfor data types
// Chapter 2 Page 57
#include <limits>
#include <iostream>

int main()
{
    std::cout << "The range for type short is from "
        << std::numeric_limits<short>::min() << " to "
        << std::numeric_limits<short>::max() << '\n';
    std::cout << "The range for type int is from "
        << std::numeric_limits<int>::min() << " to "
        << std::numeric_limits<int>::max() << '\n';
    std::cout << "The range for type long is from "
        << std::numeric_limits<long>::min() << " to "
        << std::numeric_limits<long>::max() << '\n';
    std::cout << "The range for type float is from "
        << std::numeric_limits<float>::lowest() << " to "
        << std::numeric_limits<float>::max() << '\n';
    std::cout << "The range for type double is from "
        << std::numeric_limits<double>::lowest() << " to "
        << std::numeric_limits<double>::max() << '\n';
    std::cout << "The range for type long double is from "
        << std::numeric_limits<long double>::lowest() << " to "
        << std::numeric_limits<long double>::max() << '\n';
}
