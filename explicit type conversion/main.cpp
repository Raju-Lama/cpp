#include <iostream>
//explicit type conversion
//static_cast<type>(expression);
//to treat warnings of compiler as safe to make it executable;
//telling compiler its okay;
void print(int x)
{
    std::cout << x << '\n';
}
int main()
{
    double x{5.555};
    print(x);//prints 5 only,, as the parameter for print() is integer
    print(static_cast<int>(x));//changing double to int forcibly telling its okay
    print(static_cast<int>(5.5));//5.5 is a double, but, now it is only integer is passed.
    return 0;
}
