#include <iostream>
#include <vector>
//ranged based for loops use with auto/type deduction keyword

int main()
{
    std::vector<int> fibonacci {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    for(auto num : fibonacci)//num is not index, auto could be integer, or other types,
        std::cout << num << '\n';
    return 0;
}
