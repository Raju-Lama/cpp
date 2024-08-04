#include <iostream>
/*
5. Define two structures DISTANCE1, and DISTANCE2. DISTANCE1 has
one data member meter, and DISTANCE2 has data member km.
Define an external function Compare() that takes two arguments of type DISTANCE1,
and DISTANCE2. This function first converts the meter into km and then compares
the results (Structure in C++).
*/
struct DISTANCE1
{
    float meter{};
};

struct DISTANCE2
{
    float km{};
};

void Compare(DISTANCE1 d1, DISTANCE2 d2)
{
    std::cout << "Enter distance in meter :: ";
    std::cin >> d1.meter;

    std::cout << "Enter distance in Km :: ";
    std::cin >> d2.km;

    //into kilimeter
    float intoKm{d1.meter / 1000};

    std::cout << "Converted value of " << d1.meter << " meters == "<< intoKm << " km"<< '\n';
    if(intoKm > d2.km)
    {
        std::cout << "The conversion is greater!";
    }
    else
    {
        std::cout << "The conversion is small!";
    }

}
int main()
{
    DISTANCE1 dis1{};
    DISTANCE2 dis2{};
    Compare(dis1, dis2);
    return 0;
}
