#include <iostream>
//no data member
//use namespace instead class

namespace Something
{
    void print() {std::cout << "Hi!" ;}
}
int main()
{
    Something::print();//no instance of class or object is needed.
    return 0;
}
