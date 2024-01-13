#include <iostream>
//same as c;
int main()
{
    int i{};
    int j{};
    //int k{};
    //int l{};
    for(i=0; i < 10; i++)
    {
        for(j=0; j<i; j++)
        {
            std::cout << "*  ";

        }
        /*for(k=j; k<=10; k++)
            {
                /*for(l=k; l>=10; l--)
                {
                    //std::cout << "*  ";
                }
                //std::cout << '\n';
                std::cout << "*  ";
            }
        */

        std::cout << '\n';
    }
    int a{};
    int b{};
    for(a=10; a > 0; a--)
    {
        for(b=a; b>0; b--)
        {
            std::cout << "*  ";
        }
        std::cout << '\n';
    }
    return 0;
}
