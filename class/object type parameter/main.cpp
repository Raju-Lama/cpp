#include <iostream>
class Base
{
public:
    int m_id{};

    void print() const//const function
    {
        std::cout << m_id;
    }
};

void show(const Base& prin)//prin is an object of Base
{
    prin.print();//we can now use the print() member function
}

int main()
{
    const Base base{5};
    show(base);
    return 0;
}
