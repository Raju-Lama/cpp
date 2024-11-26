#include <iostream>
#include <string>
/*
3. Write a program to declare template class test having one data member and two
functions for entering data and displaying it. Create three different types of
objects to implement those functions.
*/
template <class T>
class Test
{
public:
    T m_value;

    void set_value()
    {
        std::cout << "Enter data : ";
        std::cin >> m_value;
    }

    void get_value()
    {
        std::cout << "Data : " << m_value << '\n';
    }
};

int main()
{
    //create 3 objects
    Test <int>int_num;
    //must explicitely defined the type here at the time of creating an object
    //This is required because templates in C++ are parameterized types,
    //and the compiler needs to know the actual type to generate the
    //corresponding code.
    int_num.set_value();//set integer value

    Test <float>float_num;
    float_num.set_value();//set floating value

    Test <std::string>string_object;
    string_object.set_value();//set string value

    int_num.get_value();
    float_num.get_value();
    string_object.get_value();

    return 0;
}
