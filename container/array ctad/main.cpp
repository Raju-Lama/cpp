#include <iostream>
#include <array>
//CTAD class template arguement deduction

int main()
{
    constexpr std::array arr{1, 4, 5};//ctad, ommitting <int, size>
    std::cout << arr[2] <<'\n';//accessing using subscript operator arr[]
    return 0;
}
