#include <iostream>
class Base
{
private :
    int m_id{};

public :
    Base(int id=0)
        : m_id { id }
    {
    }

    int getBase() const { return m_id ; }
};

class Derived : public Base
{
private :
    double m_marks{};

public :
    Derived (double marks=0.0, int id=0)
        : m_marks{marks},
        Base {id}//to initialize the private member of the base class/parent class from child class
    {
    }

    double getMarks() const { return m_marks; }
};

int main()
{
    Derived derived (44.5, 5);
    std::cout << "BaseId :: " << derived.getBase() << '\n';
    std::cout << "Marks :: " << derived.getMarks() << '\n';
    return 0;
}
