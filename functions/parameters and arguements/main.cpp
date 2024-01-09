#include <iostream>

void parameters(int x, int y)//parameters are defined here
{
    std::cout << x << '\n';
    std::cout << y << '\n';

}

int main()
{
    parameters(2, 5);//this helps to initialize the parameters as these are arguments that are passed by value in the function
    //arguments are passed into parameters when the function is called.
    return 0;

}
