#include <iostream>
//dynamic memory allocation
int main()
{
    int* ptr{ new int {4} };//creating a memory cell
    std::cout << *ptr;
    delete ptr;//deallocating
    ptr = nullptr;//removing dangling pointer

    //std::cout << *ptr;
    return 0;
}
