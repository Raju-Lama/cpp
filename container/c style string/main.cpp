#include <iostream>
#include <cstring>//to use string functions from c, like strlen(), strcpy()

int main()
{
    char str[] {"string"};//c style array
    //c strings cannot be assigned later on with right value
    str[1] = {'p'};
    std::cout << str << '\n';
    std::cout << "String length :: " << std::strlen(str) << '\n';
    return 0;
}
