#include <iostream>
#include <array>

int main()
{
    int arr[2][3]//2 rows and 3 columns
    {
        {1, 2, 3},
        {4, 5, 6}
    };//cstyle array initialization, 2 dimensional array

    std::array <int, 4> arr1{1, 2, 3, 4};//one dimensional std::array

    std::array < std::array <int, 3>, 2> arr2//2 rows 3 columns
    {{
        {1, 2, 3},
        {4, 5, 6}
    }};//std::array 2 dimensional array
    return 0;
}
