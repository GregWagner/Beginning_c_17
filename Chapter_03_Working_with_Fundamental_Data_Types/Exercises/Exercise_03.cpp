/*
 * Exercise 3.3
 * What does this problem do?
 */
#include <iostream>

int main()
{
    unsigned k {430U};
    unsigned j {(k >> 4) & ~(~0 << 3)};
    std::cout << j << std::endl;
}

/*
 * k >> 4 -> 26 11010
 * ~0 -> 11111111
 * ~0 << 3 -> 11111000
 * ~(~0 << 3) -> 00000111
 * 00000111
 * 00011010
 * 00000010 -> 2
 */
