#include <iostream>
//Any constant variable whose initializer is a constant expression should be declared as constexpr.
//Any constant variable whose initializer is not a constant expression should be declared as const.
//to make optimization more fast
int main()
{
    const int x { 5 };//compile time constant, initializer is a constant
    //but, instead, its best practice to use constexpr to define such constant
    const int  y { x };//run time constant; the initializer is not a constant

    constexpr double gravity { 9.8 };
    const double gravit { gravity };

}
