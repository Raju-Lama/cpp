#include <iostream>
int swit(int);
int main()
{
    std::cout << "Enter a number from 1 to 10 :: ";

    int x{};

    std::cin >> x;

    std::cout << "You entered ";
    std::cout << swit(x);

    return 0;
}
int swit(int x)
{
    switch(x)
    {
     case 1:
        return x;
        break;
     case 2:
        return x;
        break;
    case 3:
        return x;
        break;
    case 4:
        return x;
        break;
    case 5:
        return x;
        break;
    case 6:
        return x;
        break;
    case 7:
        return x;
        break;
    case 8:
        return x;
        break;
    case 9:
        return x;
        break;
    case 10:
        return x;
        break;
    default:
        return 0;

    }
}
