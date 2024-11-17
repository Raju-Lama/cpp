#include <iostream>
class A
{
public:
    A() // default of class A
    {
        std::cout << "Base Class";
    }
    A(int x)
    {
        std::cout << "Base class " << x << std::endl;
    }
};

class B : public A
{
public:

    B()
    {
        std::cout << "Child class" << std::endl;
    }

    B(int x) : A(x)
    //this is how now we use parameterized constructor of Base class
    //instead of the constructor of B child
    {
        std::cout << "Child class " << x << std::endl;
    }

};

int main()
{
    A a{4};
    B b{5};
    //but this calls constructor of both A and B class
    return 0;
}
