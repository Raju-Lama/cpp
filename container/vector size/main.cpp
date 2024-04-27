#include <iostream>
#include <vector>

//vector size

int main()
{
    std::vector<int> prime{2, 3, 5, 7, 11};
    std::cout << prime.size() << '\n' ;//array size
    std::cout << prime.at(3); //at 4th position
    std::cout << '\n' << prime[3];
    return 0;
}
