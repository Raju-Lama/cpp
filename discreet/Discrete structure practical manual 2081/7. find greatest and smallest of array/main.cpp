#include <iostream>
//7. WAP to find greatest ad smallest number in an array.
int main()
{
    int arr[] {4, 2, 1, 6, 7, 9};
    int min{arr[0]};
    int max{arr[5]};

    for(int i {0}; i < 6; ++i)
    {
        if (min > arr[i])
            min = arr[i];

        if (max < arr[i])
            max = arr[i];
    }

    std::cout << "Min value :: " << min << '\n';
    std::cout << "Max value :: " << max << '\n';
    return 0;
}
