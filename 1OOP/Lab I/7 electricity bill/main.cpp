/*
7. An electricity board charges the following rates to
 domestic users to discourage large consumption of energy.
    For the first 100 units - 60P per unit
    For the next 200 units - 80P per unit
    Beyond 300 units - 90P per unit
All users are charged a minimum Rs. 50.00.
If the total amount is more than Rs. 300 then additional surcharge of
15% is added.
Write a program to read the name of user and
number of units consumed and print out the charges with name.
*/

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    std::cout << "Enter Full Name :: ";
    std::string name{};
    getline (std::cin, name);

    std::cout << "Enter the units consumed :: ";
    float unit{};
    std::cin >> unit;

    float charge{0};
    if (unit <= 100) charge += unit * 0.6;//60P per unit, converted into ruppee

    if (unit <= 300) charge += 100 * 0.6 + (unit - 100) * 0.8;

    if (unit > 300) charge += 100 * 0.6 + 200 * 0.8 + (unit - 300) * 0.9;

    float total {charge + 50};

    if (total > 300) total += total * 0.15;//15% surcharge

    std::cout << "\nElectricity bills ::" << std::endl << '\n' ;

    std::cout << std::left;
    std::cout << std::setw(20) << "Name" << std::setw(20) << "Units consumed";
    std::cout << std::setw(20) << "Charge" << std::endl;

    std::cout << std::setw(20) << name << std::setw(20) << unit;
    std::cout << std::setw(20) << total << std::endl;


    return 0;
}
