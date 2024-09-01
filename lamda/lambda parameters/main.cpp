#include <iostream>


int main()
{
    //first create lambda expressions,
    auto sum = [](int a, int b) {return a+b;};

    auto diff = [](int a, int b) -> double {return a-b;};
    //now explicitly defining the return type

    std::cout << (double)diff(5, 4);

    std::cout << sum(4, 5);
    return 0;
}
