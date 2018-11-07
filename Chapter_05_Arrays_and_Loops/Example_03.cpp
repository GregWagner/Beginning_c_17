// Floating-point control in a for loop
// Chapter 5 Page 133
#include <iostream>
#include <iomanip>

int main()
{
    const double PI {3.14149265358979323846};
    const size_t PERLINE {3};
    size_t linecount {};
    for (double radius {0.2}; radius <= 3.0; radius += 0.2) {
        std::cout << std::fixed << std::setprecision(2)
            << "  radius = " << std::setw(5) << radius
            << "  area = " << std::setw(6) << PI * radius * radius;
        if (++linecount == PERLINE) {
            std::cout << '\n';
            linecount = 0;
        }
    }
    std::cout << '\n';
}
