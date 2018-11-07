// Multiple initilizations in a loop expression
// Chapter 5 Page 135
#include <iostream>
#include <iomanip>

int main()
{
    unsigned limit {};
    std::cout << "This program calculate n! and the sum of the integers"
        << " up to n for values 1 ro limit.\n";
    std::cout << "What upper limit for n would you like? ";
    std::cin >> limit;

    // output column headings
    std::cout << std::setw(8) << "integer" << std::setw(8) << "sum"
        << std::setw(20) << "factorial" << '\n';

    for (unsigned long long n {1}, sum {}, factorial {1}; n <= limit; ++n) {
        sum += n;
        factorial *= n;
        std::cout << std::setw(8) << n << std::setw(8) << sum
            << std::setw(20) << factorial << '\n';
    }
}
