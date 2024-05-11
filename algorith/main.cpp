#include <iostream>
#include <algorithm>
#include <vector>
//search and replace a number, built in functions from algorithm.
int main()
{
    std::vector arr {1, 3, 5, 6, 7, 9};
    std::cout << "Enter a number to search :: " ;

    int search{};
    std::cin >> search ;

    std::cout << "Enter a number to replace :: " ;

    int replace{};
    std::cin >> replace;

    auto found {std::find( arr.begin(), arr.end(), search )};

    if(found == arr.end())
    {
        std::cout << "Could not find!" << search << '\n' ;
    }
    else
    {
        *found = replace;
    }

    for(auto lis : arr)
    {
        std::cout << lis << '\t';
    }

    return 0;
}
