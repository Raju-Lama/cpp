#include <iostream>
class Base
{
public:
    virtual void pureVirtual() = 0;
};

class derrived: public Base
{
public:
    void pureVirtual()
    {
        std::cout << "Virtual function from derrived class. Access this through pointer \n";
        std::cout << "Pointer helps to achieve a runtime polymorphism!";
    }
};
int main()
{
    derrived* derrivedObjectPtr{&}
    return 0;
}
