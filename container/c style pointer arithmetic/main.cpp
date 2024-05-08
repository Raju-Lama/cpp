#include <iostream>

//pointer arithmetic
int main()
{
    int arr[] {1, 2, 3, 4, 5};
    const int* ptr{arr};
    std::cout << ptr << '\t' << (ptr + 1) << '\n';//1st position, and 2nd position address
    std::cout << *ptr << '\t' << *(ptr + 1) << '\n' ;//1st position, and 2nd position value
    return 0;
}
