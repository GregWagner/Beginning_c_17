// Using array<T, N> to create Body Mass Index (BMI) table
// BMI = weight / (height * height)
// weight in kilograns, height in meters
#include <iostream>
#include <iomanip>
#include <array>

int main()
{
    const unsigned min_weight {100};
    const unsigned max_weight {250};
    const unsigned weight_step {10};
    const size_t weight_count {1 + (max_weight - min_weight) / weight_step};

    const unsigned min_height {48};
    const unsigned max_height {84};
    const unsigned height_step {2};
    const size_t height_count {1 + (max_height - min_height) / height_step};

    std::array<unsigned, weight_count> weight_lbs {};
    std::array<unsigned, height_count> height_inches {};

    for (size_t i {}, weight {min_weight}; i < weight_count; 
            weight += weight_step, ++i) {
        weight_lbs[i] = weight;
    }
    for (size_t i {}, height {min_height}; height <= max_height;
            height += height_step, ++i) {
        height_inches.at(i) = height;
    }

    // output table headings
    std::cout << std::setw(7) << " |";
    for (auto weight : weight_lbs) {
        std::cout << std::setw(5) << weight << "  |";
    }
    std::cout << '\n';

    for (size_t i {1}; i < weight_count; ++i) {
        std::cout << "---------";
    }
    std::cout << '\n';

    const unsigned inches_per_foot {12u};
    const double lbs_per_kg {2.2};
    const double inches_per_meter {39.37};

    for (auto height : height_inches) {
        unsigned feet = height / inches_per_foot;
        unsigned inches = height % inches_per_foot;
        std::cout << std::setw(2) << feet << "'" << std::setw(2) 
            << inches << '"' << '|';
        std::cout << std::fixed << std::setprecision(1);
        for (auto weight : weight_lbs) {
            double bmi = height / inches_per_meter;
            bmi = (weight / lbs_per_kg) / (bmi * bmi);
            std::cout << std::setw(2) << " " << bmi << " |";
        }
        std::cout << '\n';
    }

    for (size_t i {1}; i < weight_count; ++i) {
        std::cout << "---------";
    }
    std::cout << "\nBMI from 18.5 to 24.9 is normal.\n";
}
