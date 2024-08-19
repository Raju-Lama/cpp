#include <iostream>
//use of static
void staticVariable()
{
    static int x{5};//now x has the global scope.
    int y{4};
    std::cout << x << y;
}//y ends here;
int main()
{
    staticVariable();
    //std::cout << x;//x is accessible here
    //std::cout << y;//y is not accessible here/
    return 0;
}
