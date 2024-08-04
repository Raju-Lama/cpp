#include <iostream>
/*
1. Create a class called Time with data members hour,
 minute, second. Construct different member
functions with the following operations.
a. To input data for Time objects.
b. To show the data of Time objects.
c. Member function to add two Time objects.
*/

//overloading operator
// ClassName operator typeOfOperator (ClassType obj)

class Time
{
private:
    int m_hour{};
    int m_minute{};
    int m_second{};

public:
    void setTime(int hour, int mint, int sec) //setter
    {
        m_hour = hour;
        m_minute = mint;
        m_second = sec;
    }

    Time operator + (Time const& secOp) // a(should be time obj) + b(arg)
    {
        Time fop{};//first operand
        fop.m_hour = m_hour + secOp.m_hour;
        fop.m_minute = m_minute + secOp.m_minute;
        fop.m_second = m_second + secOp.m_second;
        return fop;
    }

    void getTime() //getter
    {
        std::cout << m_hour << " hours " << m_minute << " minutes " <<
        m_second << " seconds\n";
    }
};

int main()
{
    Time t2{}, t3{}; //creating two times to add
    t2.setTime(1, 20, 20); //passing arg
    t3.setTime(1, 30, 10);

    Time t1{t2 + t3};//another object time to add t1 and t2 objects

    t1.getTime();
    return 0;
}
