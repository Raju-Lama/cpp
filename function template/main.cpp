#include <iostream>

//function templates are handy
template <typename T, typename U>//T could be any data type

auto greaterThan(T x, U y)//return type is made auto
//this is same as
//auto greatherThan(auto x, auto y) feature of c++ 20//abbreviated template
{
    return (x > y) ? x : y;//x and y could be either int or double or both same,
}

int main()
{
    std::cout << greaterThan(2, 3.5);// it should be 3.5, but, with the int and double
    //comparision, it can produce result if the auto or template feature is not used.
    return 0;
}
