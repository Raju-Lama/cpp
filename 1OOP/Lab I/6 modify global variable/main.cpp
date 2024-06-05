//6. WAP to access, and modify the global version of a particular variable.

#include <iostream>

int global {5};//direct list initialization, global variable

int main()
{
    std::cout << "Global value :: " << ::global << std::endl;
    //accessing global variable

    ::global = 10;//modify the global value using scope resolution operator.

    std::cout << "New Global value " << ::global << std::endl;
    //new value of global

    return 0;
}
