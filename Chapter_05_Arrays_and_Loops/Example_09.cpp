// Sorting an array in ascending sequence - using an indefinite while loop
#include <iostream>
#include <iomanip>

int main()
{
    const size_t SIZE {1000};
    double x[SIZE] {};
    size_t count {};

    while (true) {
        double input {};
        std::cout << "Enter a non-zero value or 0 to end: ";
        std::cin >> input;
        if (input == 0) {
            break;
        }
        x[count] = input;

        if (++count == SIZE) {
            std::cout << "Sorry I can only store " << SIZE << " values.\n";
            break;
        }
    }

    if (!count) {
        std::cout << "Nothing to sort...\n";
        return 0;
    }

    std::cout << "Starting sort.\n";
    while (true) {
        bool swapped {};
        for (size_t i {}; i < count - 1; ++i) {
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
    for (size_t i {}; i < count; ++i) {
        std::cout << std::setw(8) << x[i];
        if (++n == PERLINE) {
            std::cout << '\n';
            n = 0;
        }
    }
    std::cout << '\n';
}
