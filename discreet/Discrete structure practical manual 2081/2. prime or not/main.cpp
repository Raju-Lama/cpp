#include <iostream>
//WAP to check a number is prime or not

int main()
{
    std::cout << "Enter a number :: ";
    int num{};
    std::cin >> num;
    int flag {0};
    for ( int i{2}; i < num; ++i)
    {
        if ( num % i == 0 )
        {
            flag == 1;
            break;
        }
    }

    if(flag == 0)
    {
        std::cout << "Prime!";
    }
    else
    {
        std::cout << "Not a Prime!";
    }

    return 0;
}
