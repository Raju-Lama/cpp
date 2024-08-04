#include <iostream>
/*
3. Define a structure EMPLOYEE with following specifications (Structure in C++):
a. Data Members
i. name
ii. age
iii. salary
b. Member Functions
i. setdata() to assign initial values
ii. display() to display name and age
*/
struct EMPLOYEE
{
    std::string name{};
    int age{};
    double salary{};

    void setdata(std::string nam, int ag, double sal)
    {
        name = nam;
        age = ag;
        salary = sal;
    }

    void display()
    {
        std::cout << "Employee Name :: " << name << '\n';
        std::cout << "Age :: " << age << '\n';
        std::cout << "Salary :: " << salary << '\n';
    }
};

int main()
{
    EMPLOYEE em{};
    std::cout << "Enter name of the Employee :: ";
    std::string name{};
    std::getline(std::cin, name);

    std::cout << "Enter Age :: ";
    int age{};
    std::cin >> age;

    std::cout << "Enter Salary :: ";
    double salary{};
    std::cin >> salary;

    em.setdata(name, age, salary);//setter

    em.display();//getter

    return 0;
}
