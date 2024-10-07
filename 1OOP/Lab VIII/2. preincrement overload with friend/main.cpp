#include <iostream>
//2. WAP to overload pre-increment operator (++) using friend function.

class PreIncrement
{
    int m_i;

public:

    PreIncrement(int i)
        :m_i{i}
    {
    }

    PreIncrement()
    {
    }

    friend PreIncrement& operator ++ (PreIncrement&);

    void getData()
    {
        std::cout << m_i << '\n';
    }
};

PreIncrement& operator ++ (PreIncrement& incre)
{
    ++incre.m_i;
    return incre;
}


int main()
{
    PreIncrement objIncre{1};

    objIncre.getData();
    ++objIncre;

    objIncre.getData();
    ++objIncre;

    objIncre.getData();
    ++objIncre;

    objIncre.getData();
    ++objIncre;

    objIncre.getData();

    return 0;
}
