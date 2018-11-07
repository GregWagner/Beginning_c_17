// Sorting an array in ascending sequence - using a vector<T> container
#include <iostream>
#include <iomanip>
#include <vector>

int main()
{
    std::vector<double> x;

    while (true) {
        double input {};
        std::cout << "Enter a non-zero value or 0 to end: ";
        std::cin >> input;
        if (input == 0) {
            break;
        }
        x.push_back(input);
    }

    if (x.empty()) {
        std::cout << "Nothing to sort...\n";
        return 0;
    }

    std::cout << "Starting sort.\n";
    while (true) {
        bool swapped {};
        for (size_t i {}; i < x.size() - 1; ++i) {
            if (x[i] > x[i + 1]) {
                const auto temp = x[i];
                x[i] = x[i + 1];
                x[i + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
    std::cout << "You data in ascending sequence\n"
        << std::fixed << std::setprecision(1);
    const size_t PERLINE {10};
    size_t n {};
    for (size_t i {}; i < x.size(); ++i) {
        std::cout << std::setw(8) << x[i];
        if (++n == PERLINE) {
            std::cout << '\n';
            n = 0;
        }
    }
    std::cout << '\n';
}
