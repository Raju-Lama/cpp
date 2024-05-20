#include <iostream>

class Base
{
protected:
    int m_id{};

public:
    Base (int value)
        :m_id(value)
    {
    }
};

class Derived : public Base
{
public:
    Derived (int value)
        :Base { value }
    {
    }

    int getValue () const {return m_id;}//accessing protected member of base class with derived function

};

int main()
{
    Derived child{5};
    std::cout << child.getValue() << std::endl;
    return 0;
}
