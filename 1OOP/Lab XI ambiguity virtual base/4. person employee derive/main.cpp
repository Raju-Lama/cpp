#include <iostream>
#include <string>
#include <iomanip>
/*
Create a class called Person. Derive a class Employee from class Person.
The attributes of class Person are:
a. Data members i. Name ii. Age
b. i. Constructor to assign initial values. ii. display() to display values.
The attributes of class Employee are:
c. Data members i. salary ii. company name
d. i. Constructors to assign initial values. ii. display() to show name, age, salary, and
company name(constructor in derived class)
*/
class Person
{
public:
    std::string Name;
    int Age;

    Person(std::string name, int age)
        :Name{name},
         Age{age}
    {
    }

    void display()
    {
        std::cout << "Name : " << Name << "\n";
    }
};

class Employee : public Person
{
public:
    float salary;
    std::string company_name;

    Employee(std::string person_name, int ag, float sal, std::string com_name)
        :Person(person_name, ag),
        salary{sal},
        company_name{com_name}
    {
    }

    void display()
    {
        std::cout << "Name : " << Name << '\n';
        std::cout << "Age : " << Age << '\n';
        std::cout << "Salary : " << salary << '\n';
        std::cout << "Company name : " << company_name << '\n';
    }
};

int main()
{
    Employee em{"Raju Lama", 29, 500000, "el Salvadors"};

    em.display();

    return 0;
}
