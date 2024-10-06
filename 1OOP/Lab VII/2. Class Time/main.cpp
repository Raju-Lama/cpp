#include <iostream>
/*
        2.	Define a class Time with following specification’s;
        a) Datamembers: i) Hour
        ii) Minutes
        b) Constructors to assign values
        i) Default constructor to initialize; Hour=Minutes= 0.
        ii) Parameterized constructor to assign some values.
        c) Member functions;
        i) AddTime() to add two time objects
        ii) Display() to display Hour and Minutes
*/

class Time
{
private:
    int Hour{0};
    int Minutes{0};

public:
    Time(int hr, int mi)// parameterized constructor to assign value,
        :Hour{hr},
        Minutes{mi}
    {
    }

    Time AddTime(Time t2)
    {
        Time t3{4, 5};
        //added time result

        t3.Hour = Hour + t2.Hour;
        t3.Minutes = Minutes + t2.Minutes;
        return t3;
    }

    void Display()
    {
        std::cout << Hour << " hr " << Minutes << " min" << '\n';
    }


} ;

int main()
{
    Time time1{3, 2};
    Time time2{2, 5};
    Time time3{time1.AddTime(time2)};

    std::cout << "Time 1 :: " ;
    time1.Display();

    std::cout << "Time 2 :: ";
    time2.Display();

    std::cout << "Sum of time 1 and time 2 :: ";
    time3.Display();


    return 0;
}
