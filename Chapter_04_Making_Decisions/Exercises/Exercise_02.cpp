#include <iostream>

int main()
{
    int a {};
    int b {};
    std::cout << "Enter two positive integers: ";
    std::cin >> a >> b;

    if (a <= 0 || b <= 0) {
        std::cout << "Both numbers are not positive.\n";
    } else {
        if (a < b && !(b % a)) {
            std::cout << a << " is a multiple of " << b << '\n';
        } else if (a > b && !(a % b)) {
            std::cout << b << " is a multiple of " << a << '\n';
        } else {
            std::cout << "Neither number is a multiple of the other.\n";
        }
    }
}
