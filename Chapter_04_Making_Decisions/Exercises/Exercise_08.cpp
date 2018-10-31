#include <iostream>

int main()
{
    double amount {};
    std::cout << "Enter an amount between 0 and 10: ";
    std::cin >> amount;

    if (amount < 0 || amount > 10.0) {
        std::cout << "Invalid amount\n";
        return 0;
    }

    int dollars = static_cast<int>(amount);
    int cents = dollars * 100 + static_cast<int>((amount - dollars) * 100);
 
    int numberOfQuarters = cents / 25;
    cents %= 25;

    int numberOfDimes = cents / 10;
    cents %= 10;

    int numberOfNickels = cents / 5;
    cents %= 5;

    std::cout << numberOfQuarters << 
        (numberOfQuarters == 1 ? " quarter" : " quarters") << '\n';
    std::cout << numberOfDimes << 
        (numberOfDimes == 1 ? " dime" : " dimes") << '\n';
    std::cout << numberOfNickels << 
        (numberOfNickels == 1 ? " nickel" : " nickels") << '\n';
    std::cout << cents << (cents == 1 ? " penny" : " pennies") << '\n';
}
