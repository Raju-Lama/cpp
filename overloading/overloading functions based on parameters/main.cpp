#include <iostream>
//based no numbers of parameters
int add (int x, int y, int z)
{
    return x+y+z;
}
int add (int x, int y)
{
    return x+y;
}

int main()
{
    std::cout << add(2, 3, 5) << '\n';
    std::cout << add(2, 4);
    return 0;
}
