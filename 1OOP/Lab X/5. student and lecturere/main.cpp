#include <iostream>
#include <string>
#include <iomanip>
/*
There are two classes called Student and Lecturer. Derive a class Book from both
Student and Lecturer. The attributes of class Student are S name, roll, Get(),
Display() and attributes of Lecturer are L name, age, Get(), Display().
Attributes of Book are book name, price, and Get(), Display();
*/
//example of multiple inheritance

class Student
{
public:
    std::string S_name;
    int roll;

    void Get()
    {
        std::cout << "Enter Student name : ";
        std::getline(std::cin, S_name);
        std::cout << "Enter roll number : ";
        std::cin >> roll;
        std::cin.ignore();
    }

    void Display()
    {
        std::cout << "Name : " << S_name << '\n';
        std::cout << "Roll : " << roll << '\n';
    }
};

class Lecturer
{
public:
    std::string L_name;
    int age;
    void Get()
    {
        std::cout << "Enter Lecturer Name : ";
        std::getline(std::cin, L_name);
        std::cout << "Enter age : ";
        std::cin >> age;
        std::cin.ignore();
    }

    void Display()
    {
        std::cout << "Lecturer Name : " << L_name << '\n';
        std::cout << "Age : " << age << '\n';
    }
};

class Book : public Student, public Lecturer
{
public:
    std::string name;
    float price;

    void Get()
    {
        std::cout << "Enter Book Name : ";
        std::getline(std::cin, name);
        std::cout << "Enter Price for the Book : ";
        std::cin >> price;
        std::cin.ignore();
    }

    void Display()
    {
        std::cout << "Book name : " << name << '\n';
        std::cout << "Price : " << price << '\n';
    }
};

int main()
{
    Book book;
    book.Get();
    book.Student::Get();
    book.Lecturer::Get();

    std::cout << "\n\n" << std::setw(20) << "------------ -----------" << '\n';

    std::cout << std::setw(20) << "Book" << "\n\n";
    book.Display();


    std::cout << std::setw(20) << "Student" << "\n\n";
    book.Student::Display();

    std::cout << std::setw(20) << "Lecturer" << "\n\n";
    book.Lecturer::Display();

    std::cout << std::setw(20) << "------------ -----------" << '\n';

    return 0;
}
