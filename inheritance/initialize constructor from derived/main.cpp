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

};

int main()
{

    return 0;
}
