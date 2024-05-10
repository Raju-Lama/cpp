#include <iostream>
#include <algorithm>//for std::sort
//ascending sort
// we can also use std::swap() using <utility> to sort using nested loop

int main()
{
    int arr[]{20, 1, 3, 59, 69, 50, 39, 36};
    std::sort(std::begin(arr), std::end(arr));

    for(auto i : arr)
    {
        std::cout << i << '\n' ;
    }

    return 0;
}
