#include <iostream>

//lvalue reference,

int main()
{
    int x {4};
    int& ref {x};//reference of integer type, ref is now reference of x
    std::cout << x << '\n' << ref << '\n';
    //lvalue reference cannot be integer type, the reference cannot be assigned to another variable
    ref = 5;// now x is 5;
    std::cout << x << '\n' << ref << '\n' ;
    return 0;
}
