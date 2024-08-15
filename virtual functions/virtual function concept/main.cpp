#include <iostream>
//virtual functions are used to override the parent class,
//it is compulsory to override, to use the abstract class.
//abstract class are the class containing pure virtual function

class Abstract
{
public:
    virtual void itsAbstract() = 0;
    //this is a pure virtual function
    //we can also define other methods here;
    void sayHello()
    {
        std::cout << "Hello!\n";
    }
};
//we cannot create objects of this Abstract class
//we inherit and implement the virtual function first to generate objects through it
class Derrived : public Abstract
{
public:

    void itsAbstract()
    {
        std::cout << "Virtual function implemented!";
    }
};

int main()
{
    Derrived obj1; //can only be created if the virtual function is implemented here
    //other wise, the derrived class is also considered abstract
    obj1.sayHello();
    obj1.itsAbstract();
    return 0;
}
