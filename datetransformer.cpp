// aim to add years and stuff about each year before upload to gedit for making this a birthday transformer
#include <iostream>

using namespace std;

int main () {
    std::cout << "Please enter the month and day as numbers: ";
    int month, day;
    std::cin >> month >> day;
    // Translate month into English
    if (month == 1)
        std::cout << "January";
    else if (month == 2)
        std::cout << "February";
    else if (month == 3)
        std::cout << "March";
    else if (month == 4)
        std::cout << "April";
    else if (month == 5)
        std::cout << "May";
    else if (month == 6)
        std::cout << "June";
    else if (month == 7)
        cout << "July";
    else if (month == 8)
        std::cout << "August";
    else if (month == 9)
        std::cout << "September";
    else if (month == 10)
        std::cout << "October";
    else if (month == 11)
        std::cout << "November";
    else if (month == 12)
        std::cout << "December";
    // Add the day
    cout << " " << day << ' or " << day << " de ";
// Translate month into French
    if (month == 1)
        std::cout << "janvier";
    else if (month == 2)
        cout << "fevrier";
    else if (month == 3)
        std::cout << "mars";
    else if (month == 4)
        std::cout << "avril";
    else if (month == 5)
        std::cout << "mai";
    else if (month == 6)
        std::cout << "juin";
    else if (month == 7)
        std::cout << "juillet";
    else if (month == 8)
        std::cout << "aout";
    else if (month == 9)
        std::cout << "septembre";
    else if (month == 10)
        std::cout << "octobre";
    else if (month == 11)
        std::cout << "novembre";
    else if (month == 12)
        cout << "decembre";
// Translate month into Spanish
    if (month == 1)
        std::cout << "enero";
    else if (month == 2)
        std::cout << "febreo";
    else if (month == 3)
        std::cout << "marzo";
    else if (month == 4)
        std::cout << "abril";
    else if (month == 5)
        std::cout << "mayo";
    else if (month == 6)
        std::cout << "junio";
    else if (month == 7)
        std::cout << "julio";
    else if (month == 8)
        std::cout << "agosto";
    else if (month == 9)
        std::cout << "septiembre";
    else if (month == 10)
        std::cout << "octubre";
    else if (month == 11)
        std::cout << "noviembre";
    else if (month == 12)
        std::cout << "diciembre";
    std::cout << endl;
}


