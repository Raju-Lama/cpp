#include <iostream>
//lvalue and rvalue, left value and right value
// lvalue evaluates an identifiable object
//rvalue evaluates to a value

int main()
{
    int x {10};//x is a modifiable lvalue and 10 is the rvalue
    const int y {20};//nonmodifiable lvalue is y,
    int z {y};//y is a nonmodifiable lvalue, z is l value, y is also an lvalue that takes the place of rvalue;
    return 0;
}
