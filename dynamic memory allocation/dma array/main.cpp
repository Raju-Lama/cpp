#include <iostream>
#include <cstddef>
//dma array

int main()
{
    int* arr{ new int[10]{} };
    arr[0] = 5;
     std::cout << arr[0] << '\n';

     delete[] arr;
     arr = nullptr;//this is optional as it is also going out of scope soon.
    return 0;
}
