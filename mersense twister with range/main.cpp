#include <iostream>
#include <random> //for std::mt19937 mt{} and uniform_int_distribution variablename{range, endrange}

int main()
{
    std::mt19937 mt{};
    std::uniform_int_distribution <> dice{1, 6};//for dice ,,, here use of <> is for c++14
    for(int i {1}; i <= 40; i++)
        {
            std::cout << dice(mt) << '\t';

            if(i % 5 == 0)
                std::cout << '\n';
        }
    return 0;
}
