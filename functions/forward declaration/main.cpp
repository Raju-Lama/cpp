#include <iostream>
int add(int x, int y);// not this function is declared to use it from the global scope
//or, int add(int, int);
int main()
{
    std::cout << "The sum of 3 and 4 is :: " << add(3, 4) << '\n';
    return 0;
}
int add(int x, int y)//this cannot be accessed by main() function unless it is declared in the global scope first;
{
    return x+y;
}
