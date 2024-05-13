#include <iostream>
//normal array to dynamically allocate memory

int main()
{
    int length;
    std::cout << "Enter the length of the array :: ";
    std::cin >> length;

    auto* arr{ new int [length]{} };//length specifies the number of integers to include, but, not the size of the integer
    std::cout << sizeof(length) << '\n' ;//this is the size of integer prints 4

    int i{0};
    for(int j = 0; j < length; j++)
      {
        ++i;//to count the number of elements of array
        std::cout << "Enter array [" << j << "] :: ";
        std::cin >> arr[j];
      }
     std::cout << "Size of array :: " << i << '\n' ;

    delete[] arr;//free(), deallocate like in c
    arr = nullptr;// soo that the array doesn't dangle
    return 0;
}
