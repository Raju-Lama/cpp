#include <iostream>

int input();//forward declaration

int boolean(int x, int y);//forward declaration

int main()
{
    int num1{input()};
    int num2{input()};
    std::cout << "Is " << num1 << " == " << num2 << " ? :: ";
    std::cout << boolean(num1, num2);
    return 0;
}
