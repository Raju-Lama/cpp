#include <iostream>

//7. WAP to overload + operator using friend function.
class Add
{
    int m_value{};

public:
    Add(int value)
        :m_value{value}
    {
    }

    int getData()
    {
        return m_value;
    }

    friend Add operator + (Add&, Add&);};

Add operator + (Add& x, Add& y)
{
    Add result{0};
    result.m_value = x.m_value + y.m_value;
    return result;
}

int main()

{
    Add op1{3};
    Add op2{4};
    Add addition{op1 + op2};

    std::cout << op1.getData() << " + " << op2.getData() << " == " << addition.getData();
    return 0;
}
