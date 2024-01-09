#include <iostream>

int multiply(int, int);//this is a forward declaration of a function, the parameters are optional, but, its a best practice.
void print();
int main()
{
    print();
    int x{3};//initialize
    int y{3};
    std::cout << "The product of " << x << " and " << y << " is :: " << multiply(x, y) << '\n';
    return 0;
}

int multiply(int x, int y)//function definition
{
    /*std::cout "Enter 2 numbers :: ";
    *int x{};
    *int y{};
    */
    return x * y;
}

void print()//function definition after main()
{
    //std::cout << "The product of " << x << " and " << y << " is :: " << input(x, y) << '\n';
    std::cout << "hello" << '\n';
}
