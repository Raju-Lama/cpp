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
#include <cstddef>//for std::size_t, as length of dynamically allocated array has type size_t

class Users
{
public:
    std::string m_name{};
    float m_unit{};
    float m_charge{};
    float m_total{};

};

int main()
{
    std::cout << "Enter the number of customers :: ";
    int n;
    std::cin >> n;
    //this leaves a newline at the buffer

    Users* user { new Users[n]{} };//dynamic memory allocation

    for(int i = 0; i < n; i++)
    {
        std::cout << "User " << i + 1 << " :: \n" ;
        std::cout << "  Full name :: " ;
        //fist need to ignore the new line \n buffer first, otherwise, string is not inputted.
        //using std::cin.ignore(1, '\n')
        //or we can simple use ignore white space, getline(std::cin >> std::ws, str), but, there is still an error
        std::cin.ignore();//clear the buffer, default ignore(1,'\n')
        std::getline(std::cin, user[i].m_name);

        std::cout << "  Units consumed :: ";
        std::cin >> user[i].m_unit;
        std::cout << std::endl;

    }

    for(int i = 0; i < n; i++)
    {
        if (user[i].m_unit <= 100)
            user[i].m_charge += user[i].m_unit * 0.6;//60P per unit, converted into ruppee

        if (user[i].m_unit <= 300)
            user[i].m_charge += 100 * 0.6 + (user[i].m_unit - 100) * 0.8;

        if (user[i].m_unit > 300)
            user[i].m_charge += 100 * 0.6 + 200 * 0.8 + (user[i].m_unit - 300) * 0.9;

        user[i].m_total = user[i].m_charge + 50;//minumum 50 ruppees added

        if (user[i].m_total > 300) user[i].m_total += user[i].m_total * 0.15;//15% surcharge
    }


    std::cout << "\nElectricity bills ::" << std::endl << '\n' ;

    std::cout << std::left;

    std::cout << std::setw(20) << "Name";
    std::cout << std::setw(20) << "Units consumed";
    std::cout << std::setw(20) << "Charge (Rs)" << std::endl;


    for(int i = 0; i < n; i++)
    {
        std::cout << std::left;
        std::cout << std::setw(20) << user[i].m_name;
        std::cout << std::setw(20) << user[i].m_unit;
        std::cout << std::setw(20) << user[i].m_total << std::endl;
    }

    delete[] user;//dynamically deleting array
    user = nullptr;//optional, since its going out of scope
    return 0;
}
