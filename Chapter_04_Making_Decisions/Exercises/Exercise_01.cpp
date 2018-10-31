#include <iostream>

int main()
{
    int a {};
    int b {};
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    std::cout << "These numbers are "
        << (a == b ? "the same." : "different.") << '\n';
}
