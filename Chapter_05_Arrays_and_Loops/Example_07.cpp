// Generating multiplication tables using nested loops
#include <iostream>
#include <iomanip>
#include <cctype>

int main()
{
    const size_t table_min {2};
    const size_t table_max {12};
    char reply {};

    do {
        size_t table {};
        const size_t MAX_TRIES {3};
        for (size_t count {1}; ; ++count) {
            std::cout << "What size table would you like (" << table_min
                << " to " << table_max << ")? ";
            std::cin >> table;
            if (table >= table_min && table <= table_max) {
                break;
            } else if (count < MAX_TRIES) {
                std::cout << "Invald table size entered. Try again.\n";
            } else {
                std::cout << "Invalid table size entered. Programm terminated.\n";
                return 1;
            }
        }

        // create the top line of the table
        std::cout << '\n' << std::setw(6) << " |";
        for (size_t i {1}; i <= table; ++i) {
            std::cout << " " << std::setw(3) << i << " |";
        }
        std::cout << '\n';

        // create the separator row
        for (size_t i {1}; i <= table; ++i) {
            std::cout << "------";
        }
        std::cout << '\n';

        for (size_t i {1}; i <= table; ++i) {
            std::cout << " "  << std::setw(3) << i << " |";
            for (size_t j {1}; j <= table; ++j) {
                std::cout << " " << std::setw(3) << (i * j) << " |";
            }
            std::cout << '\n';
        }

        // check if another table is required
        std::cout << "\nDo you want another table (y/n): ";
        std::cin >> reply;
    } while (std::tolower(reply) == 'y');
}
