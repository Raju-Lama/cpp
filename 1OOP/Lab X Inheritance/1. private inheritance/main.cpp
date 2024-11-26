#include <iostream>

// 1. WAP that illustrates the concept of private inheritance.

class Base
{
private:
    int m_x;
    float m_y;
protected:
    int m_z;

public:
    Base(int x, float y, int z)
        :m_x{x},
        m_y{y},
        m_z{z}
    {
    }
    Base(){}
    //default constructor in Base
};

class Child : private Base
//accessibility or visibility mode is private for private inheritance,
// all members are now private that are inherited.
{
public:

    Child(int x, float y, int z)
        :Base{x, y, z}
    //should have constructor as Base has one
        {}

    Child(){}//default constructor
    //cannot create child default constructor i dont know why
    //can only create default constructor in child if base has one default when there are other constructors
    //like parameterized constructor in base

    void getZ()
    {
        //std::cout << m_x;
        std::cout << m_z;
        //cannot access m_x, and m_y as they are both protected members in Base
    }
};


int main()
{
    Base b{1, 2, 3};
    Child c{0, 0, 5};
    c.getZ();

    //cannot access private members from base, but only protected and public,
    //yet, you can make the accessed members private in child class

    return 0;
}
