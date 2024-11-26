#include <iostream>
//2. Write a program to declare add generic types in a single function template

template <typename T> //  use typename or class
T Add(T x, T y)
//generic type T only one type
{
    return x + y;
    //returns sum of T type
}

template <class X, class Y>
//different types but return one type only
//suppose X is int type, and Y is float, we need int
X Add(X a, Y b)
{
    return a + b;
}

int main()
{
    std::cout << Add<int>(5, 5) << '\n';
    //explicitely defining the return type <int>
    std::cout << Add<float>(5.5, 3.3) << '\n';

    std::cout << Add<int>(2, 5.5) << '\n';
    //7
    return 0;
}
