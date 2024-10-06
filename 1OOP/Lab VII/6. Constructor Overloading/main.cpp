#include <iostream>
/*
    6.	WAP that shows the concept of constructor overloading.
    Your program should include:
    a) Default Constructor
    b) Parameterized Constructor
    c) Copy Constructor

*/
class Test
{
    int m_x{};
    int m_y{};

public:
    Test()
    {
        std::cout << "Default Constructor!\n";
    }

    Test(int x, int y)
        : m_x{x},
          m_y{y}
    {
        std::cout << "Parameterized constructor!\n";
    }

    Test(Test& t)
    {
        m_x = t.m_x;
        m_y = t.m_y;
        std::cout << "Copy Constructor!\n";
    }

};

int main()
{
    Test t1;
    Test t2{3, 7};
    Test t3{t2};

    return 0;
}
