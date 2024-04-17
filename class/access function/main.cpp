#include <iostream>

//getter and setter can be used as access function while it is essential to have private members

class Date
{
private://private is default in class by the way
    int m_day{17};
    int m_month{4};
    int m_year{2024};

public:
    void date(Date& dat)
    {
        std::cout << m_day << '/' << m_month << '/' << m_year << '\n';
    }

    int getDay() const {return m_day; }
    void setDay (int day) {m_day = day; }

    int getYear() const {return m_year; }
    void setYear(int year) {m_year = year; }

    int getMonth() const {return m_month; }
    void setMonth(int month) {m_month = month; }
};
int main()
{
    Date today{};
    today.setDay(17);
    today.setMonth(4);
    today.setYear(2028);
    std::cout << "Today :: " << today.getDay() << '/' << today.getMonth() << '/' << today.getYear();

    return 0;
}
