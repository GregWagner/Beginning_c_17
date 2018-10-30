// Sizing a pond for happy fish
// Chapter 2 Page 49
#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    // 2 square feet pond surface for every 6 inches of fish
    const double FISH_FACTOR {2.0 / 0.5};   // area per unit length of fish
    const double INCHES_PER_FOOT {12.0};
    const double PI {3.141592653589793238};

    double fish_count {};
    std::cout << "Enter the number of fish you want to keep: ";
    std::cin >> fish_count;

    double average_fish_length{};
    std::cout << "Enter the average fish length in inches: ";
    std::cin >> average_fish_length;
    average_fish_length /= INCHES_PER_FOOT;     // convert to feet

    const double pond_area {fish_count * average_fish_length * FISH_FACTOR};
    const double pond_diameter {2.0 * std::sqrt(pond_area / PI)};

    std::cout << "\nPond diameter required for " << fish_count << " fish is "
        <<std::fixed << std::setprecision(2) << pond_diameter << " feet.\n";
}
