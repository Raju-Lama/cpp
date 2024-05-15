#include <iostream>

//fibonacci recursion function.
//choose iteration instead recursion
int fibo(int x)
{
    if (x == 0)
        return 0;
    else if (x == 1)
        return 1;
    else
        return fibo(x - 1) + fibo (x - 2);
}

int main()
{
    for(int count{0}; count < 13; ++count)
        {
            std::cout << fibo(count) << '\t' ;
        }
    return 0;
}
