#include <iostream>
/*
1. Define a class EMPLOYEE with following specifications:
a. Private Data Members
i. name
ii. age
iii. salary
b. Member Functions
i. getdata() to assign initial values
ii. display() to display name and age (Define outside of the class)
*/
class EMPLOYEE
{
private:
    std::string m_name{};
    int m_age{};
    double m_salary{};

public:
    void getdata(std::string name, int age, double salary)//should be setdata
    {
        m_name = name;
        m_age = age;
        m_salary = salary;
    }
    void display();
};

void EMPLOYEE::display()
{
    std::cout << "Your Details :: \n";
    std::cout << "Name :: " << m_name << '\n';
    std::cout << "Age :: " << m_age << '\n';
    std::cout << "Salary :: " << m_salary << '\n';
}

int main()
{
    EMPLOYEE emp{};
    emp.getdata("Gobare Kailo", 30, 10000);
    emp.EMPLOYEE::display();
    return 0;
}
