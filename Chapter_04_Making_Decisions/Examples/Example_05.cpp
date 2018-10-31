// Combining logical operators for loan approval
// Chapter 4 Page 105

#include <iostream>

int main()
{
    int age {};
    std::cout << "Please enter your age in years: ";
    std::cin >> age;

    int income {};
    std::cout << "Please enter your annual income in dollars: ";
    std::cin >> income;

    int balance {};
    std::cout << "What is your current account balance in dollars: ";
    std::cin >> balance;

    if (age >= 21 && (income > 25'000 || balance > 100'000)) {
        // you are good for the loan, but how much>
        // This will be the lesser of twice income and half balance
        int loan  = ((2 * income) < (balance / 2) ? (2 * income) : (balance / 2));
        std::cout << "\nYou can borrow up to $" << loan << '\n';
    } else {
        std::cout << "\nUnfortunately, you don't qualify for a loan.\n";
    }
}
