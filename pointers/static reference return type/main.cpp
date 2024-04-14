#include <iostream>
#include <string>
//return by constant reference to make it a cheap copy
const std::string& returnByReference()
{
    static std::string str {"John Cena!"};//use static to make it global variable now,
    //so that it doesn't limit its scope within this function
    return str;
}

int main()
{
    std::cout << returnByReference();
    return 0;
}
