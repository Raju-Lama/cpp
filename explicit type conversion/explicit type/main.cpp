#include <iostream>

int main()
{
    double y {1.1};
    int x {y};//inplicit typeconversion, compiler automatically compiles
    std::cout << static_cast<int>(y);//explicit type conversion, we are writing codes to do this operation
    return 0;
}
