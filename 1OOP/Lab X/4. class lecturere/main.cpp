#include <iostream>
#include <string>
#include <iomanip>
/*
Create a class called Lecturer that stores the ID, and the name of lecturers.
From this class derive two classes: PartTime, which adds payperhr(type float),
and FullTime, which adds paypermonth(type float).
Each of these three classes should have a setdata() function to get its data from t he user,
and a display() function to display its data. Write a complete program to accept the value for
each attribute of each class and display the information.
*/

class Lecturer
{
public:
    std::string m_name;
    int m_id;

    void setdata()
    //set the value get value from users
    {
        //std::cin.ignore();
        //flush the buffer
        std::cout << "Enter Name : ";
        std::getline(std::cin, m_name);
        std::cout << "Enter ID : ";
        std::cin >> m_id;
    }

    void display()
    {
        std::cout << std::setw(20) << "--------- --------" << "\n\n";
        std::cout << "Name : " << m_name << '\n';
        std::cout << "Id : " << m_id << '\n';
    }

};

class PartTime : public Lecturer
{
public:
    float payperhr;

    void setdata()
    //set the value get value from users
    {
        std::cout << "Enter Pay Per Hour : ";
        std::cin >> payperhr;
    }

    void display()
    {

        std::cout << "Pay per hour : " << payperhr << '\n';
        std::cout << std::setw(20) << "--------- --------" << "\n\n";
    }
};

class FullTime : public Lecturer
{
public:
    float paypermonth;

    void setdata()
    //set the value get value from users
    {
        std::cout << "Enter Pay per month : ";
        std::cin >> paypermonth;
    }

    void display()
    {
        std::cout << "Pay per month : " << paypermonth << '\n';
        std::cout << std::setw(20) << "--------- --------" << "\n\n";
    }
};


int main()
{
    PartTime parttime;
    parttime.Lecturer::setdata();
    parttime.setdata();

    FullTime fulltime;
    std::cin.ignore();
    //flush the buffer
    fulltime.Lecturer::setdata();
    fulltime.setdata();

    std::cout << std::setw(20) << "Part Time" << "\n\n";
    parttime.Lecturer::display();
    parttime.display();

    std::cout << std::setw(20) << "Full Time" << "\n\n";
    fulltime.Lecturer::display();
    fulltime.display();

    return 0;
}
