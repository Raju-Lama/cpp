#include <iostream>
//WAP to check a number is prime or not
#include <stdlib.h>
int main()
{
    std::cout << "Enter a number :: ";
    int num{};
    std::cin >> num;

    if(num < 2)
    {
        std::cout << "Prime cannot be less than 2";
        exit(0);
    }

    int flag {0};
    for(int i{2}; i < num; ++i)
    {
        if ( num > 1 && num % i == 0 )
        {
            flag = 1;//even
            break;
        }


    }

    if(flag == 1)
    {
        std::cout << "Not a Prime!";
    }
    else
    {
        std::cout << "Prime!";
    }

    return 0;
}
