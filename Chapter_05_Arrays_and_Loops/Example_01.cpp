// Using a for loop with an array
// Chapter 5 Page 129

#include <iostream>

int main()
{
    const unsigned SIZE {6};
    unsigned height[SIZE] {26, 37, 47, 55, 62, 75};

    unsigned total {};
    for (size_t i {}; i < SIZE; ++i) {
        total += height[i];
    }
    const unsigned average {total / SIZE};
    std::cout << "The average height is " << average << '\n';

    unsigned count {};
    for (size_t i {}; i < SIZE; ++i) {
        if (height[i] < average) {
            ++count;
        }
    }
    std::cout << count << " people are below average height.\n";
}
