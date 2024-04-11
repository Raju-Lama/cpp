#include <iostream>

//const pointer and const value pointer
int main()
{
    const int x{5};
    const int* y{&x} ;//value of x cannot be changed, but, y cannot be changed.
    int z{6};
    y = &z;//can do.

    int cn{2};
    int* const ptr{&cn};//now the pointer address cannot be changed

    const int c{9};
    const int* const ptr1{&c};//pointer value as well as address cannot be changed.

    return 0;
}
