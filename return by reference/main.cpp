#include <iostream>
//return by reference with static variable, otherwise, it becomes dangling
#include <string>

const std::string& returnByReference()
{
    static const std::string staticValue {"Hello "};//it gets destroyed only after the end of the program
    return staticValue;//only use static constant
}

int main()
{
    std::cout << returnByReference() << "world!" << '\n';

    return 0;
}
