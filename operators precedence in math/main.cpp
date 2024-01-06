#include <iostream>


int main()
{
    //prioritizes parenthesis first
    //2nd gives equal priority to multiple and division starts from left to right;
    //then addition and subtraction;
    double num{};
    num = 4 + 4 - 4 * 4 / 2 ;
    std::cout << num << std::endl;
    return 0;
}
