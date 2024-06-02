// 2. WAP to find largest number in a given array.

#include <iostream>
#include <array>
int main()
{
    std::array arr { 20, 15, 2, 5, 1, 7, 8, 400, 600, 6 };//std::array <int>

    int i, j;
    for(i = 0; i < 10; i++)
    {
        for(j = i + 1 ; j < 10; j++ )
        {
            if(arr[i] > arr[j])
            {
                int small { arr[j] };
                arr[j] = arr[i];
                arr[i] = small;
            }
        }
    }

    for(int i : arr) //(i = 0; i < 10; i++)
    {
        std::cout << i << '\t';
    }

    return 0;
}
