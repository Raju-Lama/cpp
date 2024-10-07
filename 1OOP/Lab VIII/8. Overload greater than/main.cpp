#include <iostream>

//8. WAP to overload > operator.

class GreaterThan
{
    int m_value{};

public:
    GreaterThan(int value)
        :m_value{value}
    {
    }

    GreaterThan()
    {
    }

    int getData()
    {
        return m_value;
    }

    int operator > (GreaterThan& op2)
    {
        return (m_value > op2.m_value) ? 1 : 0;
    }

};

int main()
{
    GreaterThan operand1{3};
    GreaterThan operand2{2};

    GreaterThan result{operand1 > operand2};

    int what {result.getData()};

    std::cout << operand1.getData() << " > " << operand2.getData() << " ? " << what;

    return 0;
}
