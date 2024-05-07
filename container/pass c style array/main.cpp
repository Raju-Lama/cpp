#include <iostream>

void passCstyleArray(const int arr[])//this is same as int* arr, it shall decay
//put the arguement constant, if you do not wish to alter the passed values,
//yes, it is pass by reference
{
    std::cout << arr[2];
}

int main()
{
    int arr[] {1, 3, 4, 5, 6};
    passCstyleArray(arr);

    int prime[] {2, 3, 5, 7, 11, 13, 17, 19};
    passCstyleArray(prime);
    return 0;
}
