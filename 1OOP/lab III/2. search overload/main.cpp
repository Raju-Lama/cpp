#include <iostream>

/*
2. WAP to overload Search () function that takes an array of integers,
an array of character,an array of float to find the Key supplied by the user.
(Function Overloading)
*/
int Search(int integer[])
{
    return integer[1];
}

std::string Search(std::string ch[])
{
    return ch[0];
}

float Search(float f[])
{
    return f[0];
}

int main()
{
    int integer[] = {1, 2, 3, 4, 5};
    std::cout << Search(integer) ;
    return 0;
}
