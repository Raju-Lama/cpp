#include <iostream>

//6. WAP that shows overloading of operator function.
// overloading '/' division operator

class Overload
{
    double m_id{};

public:

    Overload(double id)
        :m_id{id}
    {
    }


    double operator / (Overload& op2)
    {
        return m_id / op2.m_id;
    }

    double getData()
    {
        return m_id;
    }

};

int main()
{
    Overload numerator{8};
    Overload denominator{4};
    Overload result{numerator/denominator};

    std::cout << numerator.getData() << '/' << denominator.getData() << " == " << result.getData();
    return 0;
}
