#include <iostream>
//using std:oct, std:hex, std:bin/
int main()
{
    int x{10};
    std::cout << "10 in octal :: " << std::oct << x << '\n';
    std::cout << "10 in hexadecimal :: " << std::hex << x << '\n';
    std::cout << "10 in decimal :: " << std::dec << x << '\n';
    return 0;
}
