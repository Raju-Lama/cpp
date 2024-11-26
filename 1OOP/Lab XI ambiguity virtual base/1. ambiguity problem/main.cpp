#include <iostream>
#include <string>
#include <iomanip>
/*
There are two classes called student and lecturer. Derive a class person from both student and
lecturer publicly. the attributes of class Student are sname, roll, disp() and attributes
of Lecturer lname, age, disp(). Attributes of person is only member function disp().
Now enter the details of student and lecturer and display their details.(ambiguity problem)
*/
//multiple inheritance

class Student
{
public:
    std::string s_name;
    int roll;

    void set_data()
    {
        std::cout << "Student Name : ";
        std::getline(std::cin, s_name);
        std::cout << "Enter roll number : ";
        std::cin >> roll;
        std::cin.ignore();
    }

    void disp()
    {
        std::cout << "Student Name : " << s_name << '\n';
        std::cout << "Roll number : " << roll << '\n';
    }
};

class Lecturer
{
public:
    std::string l_name;
    int age;

    void set_data()
    {
        std::cout << "Lecturer Name : ";
        std::getline(std::cin, l_name);
        std::cout << "Enter age : ";
        std::cin >> age;
        std::cin.ignore();
    }

    void disp()
    {
        std::cout << "Lecturer name : " << l_name << '\n';
        std::cout << "Age : " <<  age << '\n';
    }
};

class Person : public Student, public Lecturer
{
public:
    void disp()
    {
    }
};

int main()
{
    Person person;
    person.Student::set_data();
    //resolve ambiguity with scope resolution operator

    person.Lecturer::set_data();

    std::cout << std::setw(20) << "-------- --------" << "\n\n";

    person.Student::disp();

    std::cout << std::setw(20) << "-------- --------" << "\n\n";

    person.Lecturer::disp();

    std::cout << std::setw(20) << "-------- --------" << "\n\n";

    return 0;
}
