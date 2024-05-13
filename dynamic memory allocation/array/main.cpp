#include <iostream>
//normal array to dynamically allocate memory

int main()
{
    int length;
    std::cout << "Enter the length of the array :: ";
    std::cin >> length;

    auto* arr{ new int [length]{} };
    std::cout << sizeof(length) << '\n' ;

    int i{0};
    for(int j = 0; j < length; j++)
      {
        ++i;
        std::cin >> arr[j];
      }
     std::cout << i;

    delete[] arr;
    arr = nullptr;
    return 0;
}
