#include <iostream>

//infinite loop with true condition
int main()
{
    char ch;
    while(true)
    {
        std::cout << "Continue [y/n] :: ";
        std::cin >> ch;
        if(ch == 'n')
            return 0;

        //we are not using any increments to make it infinite
    }

    return 0;
}
