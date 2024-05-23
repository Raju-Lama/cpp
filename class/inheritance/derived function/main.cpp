#include <iostream>
//a function that is defined private in the base class
//can be redefined as public in derived class, or vice versa
class Base
{
    private:
    void func() const
    {
        std::cout << "Base\n";
    }
};

class Derived
{
    public :
    void func() const
    {
        std::cout << "Derived\n";
    }
};

int main()
{
    Derived derived{};
    derived.func();
    return 0;
}
