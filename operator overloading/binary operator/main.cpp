#include <iostream>
//overloading operator +

class Sum
{
    int m_num{};

public:
    Sum (int n)
        :m_num{n}
        {
        }

    int getSum()
    {
        return m_num;
    }

    friend Sum operator+(Sum& x, Sum& y);
    //forward declaration
};

Sum operator+ (Sum& x, Sum& y)
//return type is Sum class type
{
    return x.m_num + y.m_num;
}


int main()
{
    Sum n1{2}, n2{3};
    Sum s1{n1+n2};
    //add two objects

    std::cout << s1.getSum();


    return 0;
}
