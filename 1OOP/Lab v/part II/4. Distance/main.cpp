#include <iostream>
/*
4. Define a class Distance with data members inch, and feet.
Define a member function Maximum() that
calculates the maximum distance among three Distance objects.
*/

class Distance
{
private:
    float m_inch{};
    float m_feet{}; // 1 inch = 0.8333333
    float m_total{m_inch + m_feet})

public:
    void setData(float inch, float feet)
    {
        m_inch = inch;
        m_feet = feet;
    }

    void convert()
    {
        m_total = m_feet + m_inch * 12;
    }

    void Maximum(Distance x, Distance y, Distance z)
    {
        if (x.m_total > y.m_total) && (x.m_total > z.m_total)
        {
            std::cout << x.m_total << " is the Greatest!\n";
        }
        else if (y.m_total > x.m_total) && (y.m_total > z.m_total)
        {
            std::cout << y.m_total << " is the Greatest!\n";
        }
        else
        {
            std::cout << z.m_total << " is the Greatest!\n";
        }
    }
};
int main()
{
    Distance ob1{}, ob2{}, ob3{};

    return 0;
}
