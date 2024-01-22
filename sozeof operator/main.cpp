#include <iostream>
//size of fundamental/primitive/in-built data types
int main()
{
    std::cout << "int :: " << sizeof(int) << " bytes" << '\n';
    std::cout << "bool :: " << sizeof(bool) << " bytes" << '\n';
    std::cout << "char :: " << sizeof(char) << " bytes" << '\n';
    std::cout << "shot :: " << sizeof(short) << " bytes" << '\n';
    std::cout << "long :: " << sizeof(long) << " bytes" << '\n';
    std::cout << "long long :: " << sizeof(long long) << " bytes" << '\n';
    std::cout << "float :: " << sizeof(float) << " bytes" << '\n';
    std::cout << "double :: " << sizeof(double) << " bytes" << '\n';
    std::cout << "long double :: " << sizeof(long double) << " bytes" << '\n';
    return 0;
}
