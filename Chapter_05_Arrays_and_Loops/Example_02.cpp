// Obtaining the number of array elements
// Chapter 5 Page 131
#include <iostream>
#include <array>

int main()
{
    int values[] {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

    // the old way
    std::cout << "There are " << sizeof(values) / sizeof(values[0])
            << " elements in the array.\n";

    // the new way
    int sum {};
    for (size_t i = 0; i < std::size(values); ++i) {
        sum += values[i];
    }
    std::cout << "The sum of the array elements is " << sum << '\n';
}
