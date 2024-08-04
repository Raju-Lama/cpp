#include <iostream>
/*
4. Define a class FINDER with,
a. Data Member:
    i. An integer array of size 10.
b. Member functions:
    i. getData() to assign values
    ii. Largest() to find the largest number.
*/

class FINDER
{
private:
    int arr[10]{};

public:
    void getData()//should be setter instead
    {
        for (int i = 0; i < 10; ++i)
        {
            std::cout << "Element " << i << " :: ";
            std::cin >> arr[i];
        }
    }

    void Largest()
    {
        int largest{arr[0]};
        for (int i = 1; i < 10; ++i)
        {
            if (largest < arr[i])
            {
                largest = arr[i];
            }
        }
        std::cout << "Largest :: " << largest << '\n';
    }
};

int main()
{
    FINDER large{};
    large.getData();//enter arrays
    large.Largest();//display the largest
    return 0;
}
