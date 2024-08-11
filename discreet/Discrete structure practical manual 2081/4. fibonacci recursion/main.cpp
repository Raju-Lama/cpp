#include <iostream>
//WAP to find Fibonacci series using recursion
int nacci(int n)
{
    if (n == 0)
        return 0;//base case

    if (n == 1)//basecase
        return 1;

    return nacci(n-1) + nacci(n-2); // last and 2nd last sum
}

int main()
{
    std::cout << "Enter a number :: ";
    int num{};
    std::cin >> num;

    //std::cout << "Fibonacci series up to n :: \n" << nacci(num);//to find nth term of fibonacci

    //series up to nth terms

    for (int i{0}; i < num; ++i)
    {
        std::cout << nacci(i) << ' ';
    }

    return 0;
}
