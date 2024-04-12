#include <iostream>
//pass by address and dereference
void passAddress(int *ptr)
{
    *ptr = 5;
}

int main()
{
    int n{3};
    passAddress(&n);//pass address
    std::cout << n;//prints 5
    return 0;
}
