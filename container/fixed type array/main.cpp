#include <iostream>
//fixed type array , std::array and c type array
#include <array>
//use array with constexpr, other wise use vector instead
int main()
{
    constexpr std::array <int , 3> arr{1, 3, 5};

    constexpr std::array <int, 5> arr1 = {1, 2, 3, 4, 5};

    for(auto num : arr)
        std::cout << num << ' \n';
    return 0;
}
