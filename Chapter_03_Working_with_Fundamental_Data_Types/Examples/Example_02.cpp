// Operations on enumerations
// Chapter 3 Page 79
#include <iostream>
#include <iomanip>

int main()
{
    enum class Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday,
        Sunday};
    Day yesterday {Day::Monday};
    Day today {Day::Tuesday};
    Day tomorrow {Day::Wednesday};
    const Day poets_day {Day::Friday};

    enum class Punctuation : char {Comma = ',', Exclamation = '!',
        Question = '?'};
    Punctuation ch {Punctuation::Comma};

    std::cout << "Yesterday's value is " << static_cast<int>(yesterday)
        << static_cast<char>(ch) << " but poets day is "
        << static_cast<int>(poets_day) 
        << static_cast<char>(Punctuation::Exclamation) << '\n';

    today = Day::Thursday;
    ch = Punctuation::Question;
    tomorrow = poets_day;

    std::cout << "Is today's value(" << static_cast<int>(today)
        << ") the same as poets day(" << static_cast<int>(poets_day)
        << ')' << static_cast<char>(ch) << '\n';

    // these are all errors
    // ch = tomorrow;
    // tomorrow = Friday;
    // today = 6;
}
