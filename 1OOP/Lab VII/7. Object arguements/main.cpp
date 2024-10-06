#include <iostream>
#include <string>
/*
    7. 	Define a class A with three data members of type float, string, and int.
    Define a default argument constructor with default values for string, and int type.
     Show all possible types of object creation by using the default argument constructor
*/
class A
{
    float m_float{};
    std::string m_string{};
    int m_int{};

public:
    A(float f, std::string s="default", int i=3)
        :m_float{f},
        m_string{s},
        m_int{i}
    {
    }

    void Display()
    {
        std::cout << "Float value :: " << m_float << '\t';
        std::cout << "String value :: " << m_string << '\t';
        std::cout << "Integer value :: " << m_int << '\n';
    }

};

int main()
{
    A ob1{2.5};
    ob1.Display();

    A ob2{5.5, "Super Mario", 3};
    ob2.Display();

    A ob3{2.2, "Goat"};
    ob3.Display();

    return 0;
}
