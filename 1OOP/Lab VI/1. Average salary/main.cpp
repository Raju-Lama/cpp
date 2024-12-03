#include <iostream>
#include <string>
/*
1.	Create a class Employee with data member’s name, and salary.
 Write appropriate member functions to initialize and to display data members.
 Calculate average salary of 10 employees using friend function.
*/

class Employee
{

    std::string m_name{};
    double m_salary{};

public:
    void setDetails()
    {
        std::cout << "Enter Name :: ";
        std::getline(std::cin, m_name);
        std::cout << "Enter Salary :: ";
        std::cin >> m_salary;
        std::cin.ignore();
    }

    void getDetails() const
    {
        std::cout << "Name :: " << m_name << '\n';
        std::cout << "Salary :: " << m_salary << '\n';
    }

    friend double average(Employee* tm);
};

double average(Employee* tm)
{
    double sum{0};
    for(int i{0}; i < 2; ++i)
    {
        sum += tm[i].
        m_salary;
    }
    return sum / 10;
}

int main()
{
    Employee* em = new Employee[2];

    for(int i{0}; i < 2; ++i)
    {
        em->setDetails();
    }

    for(int i{0}; i < 2; ++i)
    {
        em->getDetails();
    }

    std::cout << "Average Salary :: " << average(em) << std::endl;

    delete[] em;
    em = nullptr;
    return 0;
}
