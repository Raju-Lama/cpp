#include <iostream>
//run time polymorphism can be achieved using virtual function of base class
//that is overridden in derrived classes,
//they are accessed through the base class pointer
class Base
{
public:
    virtual void Hello()
    {
        std::cout << "Base!";
    }
};
class Derrived : public Base
{
public:
    void Hello()
    {
        std::cout << "Child!";
    }
};

int main()
{
    Base* bptr{new Derrived};

    bptr->Hello();

    Base* b;
    Derrived d;
    b = &d;
    //old style

    b->Hello();
    return 0;
}
