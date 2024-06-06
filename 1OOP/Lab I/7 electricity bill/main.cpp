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

int main()
{
    std::cout << "Enter Full Name :: ";
    std::string name{};
    getline (std::cin, name);

    std::cout << "Enter the units consumed :: ";
    float unit{};
    std::cin >> unit;

    std::cout << "Electricity bills ::" << std::endl;

    return 0;
}
