#include <iostream>
#include <array>
struct House
{
    int id{};
    int code{};
};

int main()
{
    std::array <House, 3> arr{};
    arr[0] = {1, 2};
    arr[1] = {2, 3};
    arr[2] = {3, 4};
    for(const auto & loop : arr)
    {
        std::cout << loop.id << '\n' ;
        std::cout << loop.code << '\n' ;
    }

    return 0;
}
