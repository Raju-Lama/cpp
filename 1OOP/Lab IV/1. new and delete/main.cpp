#include <iostream>

//1. WAP that shows the use of new and delete operator. (new, and delete operator)

int main()
{
    std::cout << "Enter the number of array :: ";
    int n{};
    std::cin >> n;
    int* ar{new int{n}}; // or int* ar = new int(n)
    //dynamically created ar with n int types

    for (int i = 0; i < n; ++i)
    {
        std::cout << "Enter value of element " << i << " :: ";
        std::cin >> ar[i];
    }

    for (int i = 0; i < n; ++i)
    {
        std::cout << "Element " << i << " :: " << ar[i] << '\n';
    }

    delete[] ar;
    ar = nullptr;
    return 0;
}
