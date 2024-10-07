#include <iostream>
//10. WAP to overload << insertion operator for user defined type Date.
//format{mm-dd-yy}
//use std::ostream , outputstream with insertion operator.

class Date
{
    int m_month{};
    int m_day{};
    int m_year{};

public:
    Date(int m, int d, int y)
        :m_month{m},
        m_day{d},
        m_year{y}
    {
    }

    friend void operator << (std::ostream& output, Date& date);
};

void operator << (std::ostream& output, Date& date)
{
    output << date.m_month << '-' << date.m_day << '-' << date.m_year << '\n';
    //outputs
}

int main()
{
    Date birthday{01, 25, 1987};

    std::cout << birthday;

    return 0;
}
