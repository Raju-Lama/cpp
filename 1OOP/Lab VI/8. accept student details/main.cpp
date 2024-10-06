#include <iostream>
/*
8.
Write a program to accept the student detail
such as name and 3 different marks by get_data() method and display
 the name and marks using display() method. Define a friend class for
 calculating the average of marks using the method mark_avg().
 */
 #include <string>

 class Student
{
    std::string m_name{};
    float m_math{}, m_cs{}, m_logic{};

public:
    /*Student(std::string name, float math, float cs, float logic)
        :m_math{math},
        m_cs{cs},
        m_logic{logic}
    {
    }
    */

    void set_data()
    {
        std::cout << "Enter name :: ";
        std::getline(std::cin, m_name);

        std::cout << "Enter marks :: \n";

        std::cout << "Math :: ";
        std::cin >> m_math;

        std::cout << "CS :: ";
        std::cin >> m_cs;

        std::cout << "Logic :: ";
        std::cin >> m_logic;

        std::cin.ignore();
    }

    void display()
    {
        std::cout << "Name :: " << m_name << '\n';
        std::cout << "Math :: " << m_math << '\n';
        std::cout << "CS :: " << m_cs << '\n';
        std::cout << "Logic :: " << m_logic << '\n';
    }

    friend float mark_avg(Student);

};


 float mark_avg(Student m)
 {
    return ( m.m_math + m.m_cs + m.m_logic ) / 3;
 }

int main()
{
    Student st1;
    st1.set_data();
    st1.display();

    std::cout << "The average marks obtained :: " << mark_avg(st1);

    return 0;
}
