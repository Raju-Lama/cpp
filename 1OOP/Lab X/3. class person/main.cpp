#include <iostream>
#include <string>
/*3. create class Person. Derive a class Employee from class Person. the attributes of class
Person are:
a. Data members: i. Name ii. age and iii. address
b. Member function i. getdata() to assign initial values. ii. display() to diaplay values.
The attributes of class Employee are:
c. Data members, i. salary ii. company name
d. Member functions, i. setdata() to assign initial values ii. show Tax() to display tax value of 15%
    iii. Diplay() to show values.
*/
class Person
{
public:
    std::string name;
    int age;
    std::string address;

    void getdata()
    {
        std::cout << "Enter name : ";
        std::getline(std::cin, name);

        std::cout << "Enter Age : ";
        std::cin >> age;

        //flush buffer
        std::cin.ignore();

        std::cout << "Enter Address : ";;
        std::getline(std::cin, address);

    }

    void display()
    {
        std::cout << "Name : " << name << '\n';
        std::cout << "Age : " << age << '\n';
        std::cout << "Address : " << address << '\n';
    }
};

class Employee : public Person
{
public:
    float salary;
    std::string company_name;

    void setdata()
    {
        std::cout << "Enter salary : ";
        std::cin >> salary;

        std::cin.ignore();
        //flush the buffer

        std::cout << "Enter Company Name : ";
        std::getline(std::cin, company_name);
    }

    void ShowTax()
    {
        std::cout << "Tax : " << 0.15 * salary << '\n';
        //15% tax
    }

    void Display()
    {
        std::cout << "Salary : " << salary << '\n';
        std::cout << "Company Name : " << company_name << '\n';
    }
};

int main()
{
    Employee em;

    em.getdata();
    em.setdata();
    em.display();
    em.Display();

    return 0;
}
