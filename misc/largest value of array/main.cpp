#include <iostream>

int countTallestCandles(int arr[], int arrSize)
{
    int count{0};
    int greater{arr[0]};
    for (int i = 0; i < arrSize; i++)
    {
        if(greater <= arr[i])
        {
            greater = arr[i];
        }
    }

    for(int j = 0; j < arrSize; j++)
        {
            if(greater == arr[j])
            { count++; }
        }

    return count;
}

int main()
{
    int arr[] {1, 2, 3, 4, 5, 5};
    std::cout << "Largest value :: " << "Numbers of times repeated :: " <<
    countTallestCandles(arr, 6) << std::endl;
    return 0;
}
