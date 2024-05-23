#include <iostream>

class Base
{
    public:
    void print() const
    {
        std::cout << "Base" << '\n';
    }
};

class Derived : public Base
{
public:
    void print() const//redefine
    {
        Base::print(); //calling the function from base

        std::cout << "Derived!" << '\n';
    }
};

int main()
{
    Derived derived{};
    derived.print();
    return 0;
}
