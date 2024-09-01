#include <iostream>
//capture all the values by using = sign

int main()
{
    int a {10}, b{10}, c{10};

    auto sumAll = [=] ()//= captures all variables a, b, c, d, e, f
    {
        return a + b + c;
    };

    std::cout << sumAll();

    return 0;
}
