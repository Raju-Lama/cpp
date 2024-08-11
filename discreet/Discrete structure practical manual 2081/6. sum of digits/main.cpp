#include <iostream>
//6. WAP to find the sum of digits of any given positive number
int sum(int n)
{
    int dig{0};
    int sum{};
    while(n > 0)
    {
        dig = n % 10;
        sum += dig;
        n /= 10;
    }
    return sum;

}
int main()
{
    std::cout << "Enter a number :: ";
    int num{};
    std::cin >> num;

    std::cout << "The sum of the digit is :: " << sum(num);
    return 0;
}
