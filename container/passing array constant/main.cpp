#include <iostream>
#include <array>
//std::array is an object, and passing an object could be expensive if we try to copy, hence, we pass using
//reference(const)
void passByRefArray(const std::array <int, 3>& ar)//<int, 3> is compulsory
{
    std::cout << ar[2] << '\n' ;
}
int main()
{
    std::array <int, 3> arr{1, 2, 3};//we can ommit <int, 3> for CTAD, arguement deduction
    passByRefArray(arr);
    return 0;
}
