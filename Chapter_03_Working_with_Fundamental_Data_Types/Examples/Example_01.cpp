// Using the bitwise operators
// Chapter 3 Example 1
#include <iostream>
#include <iomanip>

int main()
{
    unsigned red {0xFF0000u};
    unsigned white {0xFFFFFFu};

    std::cout << std::hex << std::setfill('0');

    std::cout << "Try out bitwise complement, AND, and OR operators:\n";
    std::cout << "\nInitial value:        red = " << std::setw(8) << red;
    std::cout << "\nComplement           ~red = " << std::setw(8) << ~red;

    std::cout << "\nInitial value:      white = " << std::setw(8) << white;
    std::cout << "\nComplement         ~white = " << std::setw(8) << ~white;

    std::cout << "\nBitwise AND: red & white  = " << std::setw(8) << (red & white);
    std::cout << "\nBitwise  OR: red | white  = " << std::setw(8) << (red | white);

    std::cout << "\n\nNow try successive exclusive OR operations::";
    unsigned mask {red ^ white};
    std::cout << "\nmask = red ^ white = " << std::setw(8) << mask;
    std::cout << "\n        mask ^ red = " << std::setw(8) << (mask ^ red);
    std::cout << "\n      mask ^ white = " << std::setw(8) << (mask ^ white);

    unsigned flags {0xFF};
    unsigned bit1mask {0x1};            // selects bit 1
    unsigned bit6mask {0b10'0000};      // selects bit 6
    unsigned bit20mask {1u << 19};      // selects bit 20

    std::cout << "\n\nUse masks to select ot set a particular flag bit:";
    std::cout << "\nSelect bit 1 from flags   : " << std::setw(8) << (flags & bit1mask);
    std::cout << "\nSelect bit 6 from flags   : " << std::setw(8) << (flags & bit6mask);
    std::cout << "\nSwitch off bit 6 in flags : " << std::setw(8) << (flags &= ~bit6mask);
    std::cout << "\nSwitch on bit 20 in flags : " << std::setw(8) << (flags |= bit20mask)
        << '\n';
}
