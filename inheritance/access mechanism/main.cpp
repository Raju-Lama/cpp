#include <iostream>
class Access
{
public:
    int m_pub{};//can be accessed by child class
private:
    int m_pri{};//not accessible by the child or derived class
protected:
    int m_prot{};//accessible by the child class
};
class Child : protected Access
{
public:
    Child()
    {
        m_prot = {5};
    }
};

int main()
{

    return 0;
}
