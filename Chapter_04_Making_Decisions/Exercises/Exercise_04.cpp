#include <iostream>

int main()
{
    int age {};
    std::cout << "Enter age: ";
    std::cin >> age;
    if (age < 1 || age > 120) {
        std::cout << "Invalid age - you do not qualify.\n";
        return 0;
    }

    char gender {};
    std::cout << "Enter gender (n/f): ";
    std::cin >> gender;
    if (gender != 'm' && gender != 'f') {
        std::cout << "Invalid gender - you do not qualify.\n";
        return 0;
    }

    enum class AcademicDegree {none, associate, bachelor, professional,
        master, doctor};
    char d {};
    std::cout << "Enter academic degree (enter the first letter only): "
        << "None\n"
        << "Associate\n"
        << "Bachelor\n"
        << "Professional\n"
        << "Master\n"
        << "Doctor\n";

    std::cin >> d;

    AcademicDegree degree {};
    switch (std::tolower(d)) {
        case 'n':
            degree = AcademicDegree::none;
            break;
        case 'a':
            degree = AcademicDegree::associate;
            break;
        case 'b':
            degree = AcademicDegree::bachelor;
            break;
        case 'p':
            degree = AcademicDegree::professional;
            break;
        case 'm':
            degree = AcademicDegree::master;
            break;
        case 'd':
            degree = AcademicDegree::doctor;
            break;
        default:
            std::cout << "Invalid degree - you do not qualify.\n";
            return 0;
    }

    char input {};
    std::cout << "Are you married (y/n): ";
    std::cin >> input;
    input = std::tolower(input);
    if (input != 'y' && input != 'n') {
        std::cout << "Invalid married status - you do not qualify.\n";
        return 0;
    }
    bool isMarried = (input == 'y' ? true : false);

    std::cout << "Do you speak Hindi(y/n): ";
    std::cin >> input;
    input = std::tolower(input);
    if (input != 'y' && input != 'n') {
        std::cout << "Invalid input - you do not qualify.\n";
        return 0;
    }
    bool speaksHindi = (input == 'y' ? true : false);

    std::cout << "DO you speak Urdu(y/n): ";
    std::cin >> input;
    input = std::tolower(input);
    if (input != 'y' && input != 'n') {
        std::cout << "Invalid input - you do not qualify.\n";
        return 0;
    }
    bool speaksUrdu = (input == 'y' ? true : false);

    if (isMarried && speaksHindi && speaksUrdu) {
        std::cout << "Interesting\n";
    }
}
