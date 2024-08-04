#include <iostream>
/*
6. Create a namespace Employee_Details. Place name, age,
id, and salary inside the namespace.
Define a function named Data_Entry() to enter values of name, age,
id, and salary. Also define another function
Calc_Tax() to calculate tax details. (Namespace)
Given, tax rate;
Salary < 15000 => 2%
15000 <= Salary <= 20000 => 5%
Salary > 20000 => 10%.
*/

namespace Employee_Details
{
    std::string name{};
    int age{};
    int id{};
    double salary{};

    void Data_Entry()
    {
        std::cout << "Enter your name :: ";
        std::getline(std::cin, name);

        std::cout << "Enter your age :: ";
        std::cin >> age;

        std::cout << "Enter your ID :: ";
        std::cin >> id;

        std::cout << "Enter your salary :: ";
        std::cin >> salary;

    }

    double Calc_Tax()
    {
        if (salary < 15000)
            return 0.02 * salary;

        if (salary >= 15000 && salary <= 20000)
            return 0.05 * salary;

        if (salary > 20000)
            return 0.1 * salary;
    }

    void Print()
    {
        std::cout << "Your details :: \n";
        std::cout << "Name :: " << name << '\n';
        std::cout << "Age :: " << age << '\n';
        std::cout << "ID :: " << id << '\n';
        std::cout << "Salary after Tax :: " << salary - Calc_Tax() << '\n';
    }
}

int main()
{
    Employee_Details::Data_Entry();
    Employee_Details::Print();
    return 0;
}
