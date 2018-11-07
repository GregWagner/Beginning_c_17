// Using a while loop to calculate the sum of integers from 1 to n and n!
#include <iostream>
#include <iomanip>

int main()
{
    unsigned limit {};
    std::cout << "This program calculates n! and the sum of the integers"
        << " up to n for values 1 to limit.\n";
    std::cout << "What upper limit for n would you like? ";
    std::cin >> limit;

    // output column headings
    std::cout << std::setw(8) << "integer" << std::setw(8) << "sum"
        << std::setw(20) << "factorial" << '\n';
    unsigned n {1};
    unsigned sum {};
    unsigned long long factorial {1uLL};

    while (n <= limit) {
        sum += n;
        factorial *= n;
        std::cout << std::setw(8) << n << std::setw(8) << sum
            << std::setw(20) << factorial << '\n';
        ++n;
    }
}
