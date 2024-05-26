#include <iostream>
//c++20 auto template

auto add (auto  x, auto y)
{
    return x + y;
}

int main()
{
    std::cout << add (10, 10.5) << '\n';
    return 0;
}
