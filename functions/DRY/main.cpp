#include <iostream>
//DRY - dont repeat yourself
//function gives code reusability
//to input multiple variables i am making a usr defined function
// very useful......
int input()
{
    int value{};
    std::cout << "Enter a integer :: ";
    std::cin >> value;
    return value;
}
int main()
{
    int x{input()};
    int y{input()};
    int z{input()};
    std::cout << "The sum of " << x << ", " << y << ", and " << z << " is :: "
              << x + y + z << '\n';
    return 0;
}
