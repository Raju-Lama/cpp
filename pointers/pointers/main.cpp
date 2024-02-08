#include <iostream>
//pointers
int main()
{
    int x{10};//x is pointer to int type
    const int* y{&x};//points to the address of x,
    //value of x cannot be altered now as it is constant
    //cannot do int* const z{&y}// as value of y is constant itself
    int* const z{&x};//now the z points to the address of y
    //in this regard, the address of z now cannot be changed,,
    //also since y has a constant value, it the value cannot be altered too.
    std::cout << "x variable :: " << x << '\n';
    std::cout << "y :: " << y << '\n';
    std::cout << "*y :: " << *y << '\n';//dereferencing the pointer
    std::cout << "*z :: " << *z << '\n';
    std::cout << "z :: " << z << '\n';
    return 0;
}
