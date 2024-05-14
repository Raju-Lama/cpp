#include <iostream>
int print(int x)
{
    return x;
}

int main()
{
    int (*ptr)(int) {&print};//declaration and passing address of the function
    std::cout << (*ptr)(5);
    return 0;
}
