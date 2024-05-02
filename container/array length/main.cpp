#include <iostream>
#include <array>
//arr.size()
//std::size(arr)

int main()
{
    constexpr std::array arr{1, 2, 3};
    std::cout << "Array length :: " << arr.size() << '\n';//this can also be done
    std::cout << "Array length :: " << std::size(arr) << '\n';//this is also valid
    return 0;
}
