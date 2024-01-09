#include <iostream>

int input()//to input
{
    int value{};
    std::cout << "Enter an integer number :: ";
    std::cin >> value;
    return value;
}
int intoTwo(int x)//to double
{
    return x * 2;
}
int main()
{
    int num{input()};
    std::cout << "\n \n The double of the number is :: " <<intoTwo(num);//to print the value
    return 0;

}
