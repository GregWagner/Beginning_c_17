// Allocating an array at runtime (may not be legal)
#include <iostream>
#include <iomanip>

int main()
{
/**** This does not work
    size_t count {};
    std::cout << "How many heights will you enter? ";
    std::cin >> count;
    int height[count];
 */
    const int count {6};
    int height[count];

    size_t entered {};
    unsigned total {};
    while (entered < count) {
        std::cout << "Enter a height: ";
        std::cin >> height[entered];
        if (height[entered]) {
            total += height[entered];
            ++entered;
        } else {
            std::cout << "A height must be positive - try again.\n";
        }
    }
    std::cout << std::fixed << std::setprecision(1)
        << "The average height is " << static_cast<float>(total) / count << '\n';
}
