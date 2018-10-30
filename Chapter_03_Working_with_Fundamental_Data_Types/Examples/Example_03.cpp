// Demonstrating scope, lifetime, and global variables
// Chapter 3 Page 83
#include <iostream>

// Global variables
long count1 {999L};
double count2 {3.14};
int count3;

int main()
{
    int count1 {10};            // hides global count1
    int count3 {50};            // hodes global count3
    std::cout << "Value of outer count1 = " << count1 << '\n';
    std::cout << "Value of global count1 = " << ::count1 << '\n';
    std::cout << "Value of global count2 = " << count2 << '\n';

    {
        int count1 {20};        // hides outer count1
        int count2 {30};        // hides global count2
        std::cout << "Value of inner count1 = " << count1 << '\n';
        std::cout << "Value of global count1 = " << ::count1 << '\n';
        std::cout << "Value of inner count2 = " << count2 << '\n';
        std::cout << "Value of global count2 = " << count2 << '\n';

        count1 = ::count1 + 3;  // sets inner count1
        ++::count1;             // changes global count1
        std::cout << "Value of inner count1 = " << count1 << '\n';
        std::cout << "Value of global count1 = " << ::count1 << '\n';
        count3 += count2;       // increments outer count3 by inner count2;

        int count4 {};
    }
//  std::cout << count 3 << '\n';   

    std::cout << "\nValue of outer count1 = " << count1 << '\n'
        << "Value of outer count3 = " << count3 << '\n'
        << "Value of global count3 = " << ::count3 << '\n'
        << "Value of global count2 = " << count2 << '\n';
}
