#include <iostream>

//8. WAP to find the GCD of two positive integers using euclidian algorithm

int main()
{
    std::cout << "Enter two integers : ";
    int a, b;
    std::cin >> a >> b;
    int r ;// for remainder
    while((a%b) > 0)
    {
        r = a % b;//remainder becomes the quotient
        a = b; //divident becomes the base
        b = r;
    }

    std::cout << "GCD :: " << r;// the last remainder
    return 0;
}
