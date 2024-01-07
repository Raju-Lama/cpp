#include <iostream>

int input()//value returning function
{
    int value;
    std::cout << "Enter a number :: ";
    std::cin >> value;
    return value;//when no values are returned, it creates undefined behavior.
}
int main()
{
    int num{input()};//initializes by calling input() function,
    //first it calls the function, we have to input a value, and it initializes in num;
    std::cout << "\nThe double of " << num << " is :: " << num * 2 << '\n';
    return 0;//status code// or exit code;
}
