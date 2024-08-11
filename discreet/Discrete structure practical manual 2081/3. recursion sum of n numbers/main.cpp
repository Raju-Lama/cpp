#include <iostream>
//3. WAP to find the sum of natural number using recursion

int sumOfNatural(int n)
{
    if (n == 0)
        return 0; //base case

    return n + sumOfNatural(n - 1);//recursion
}


int main()
{
    std::cout << "Enter a number :: ";
    int num{};
    std::cin >> num;

    std::cout << "The sum of n numbers is :: " << sumOfNatural(num);
    return 0;
}
