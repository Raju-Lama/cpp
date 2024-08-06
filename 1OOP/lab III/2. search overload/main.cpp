#include <iostream>

/*
2. WAP to overload Search () function that takes an array of integers,
an array of character,an array of float to find the Key supplied by the user.
(Function Overloading)

*/

//#include <vector>

void Search(int integer[])
{
    std::cout << "enter an integer to search for :: ";
    int n;
    std::cin >> n;
    int exists{0};
    //for (auto i : integer)
    int length { sizeof(integer) / sizeof(integer[0]) };

    for(int i {0}; i <= length; ++i )
    {
        if (n == integer[i])
            exists = 1;

    }
    if (exists == 1)
    {
        std::cout << "Voilà:, the search exists! \n";
    }
    else
    {
        std::cout << "The search doesn't exist! \n";
    }
}
void Search(char chArr[])//dont use [] when referencing
{
    std::cout << "enter a character to search for :: ";
    char ch;
    std::cin >> ch;
    int exists{0};
    //for (auto i : integer)
    int length { sizeof(chArr) / sizeof(chArr[0]) };

    for(int i {0}; i <= length; ++i )
    {
        if (ch == chArr[i])
            exists = 1;

    }
    if (exists == 1)
    {
        std::cout << "Voilà:, the search exists! \n";
    }
    else
    {
        std::cout << "The search doesn't exist! \n";
    }
}

void Search(float flt[])
{
    std::cout << "enter a float to search for :: ";
    float f;
    std::cin >> f;
    int exists{0};
    //for (auto i : integer)
    int length { sizeof(flt) / sizeof(flt[0]) };

    for(int i {0}; i <= length; ++i )
    {
        if (f == flt[i])
            exists = 1;

    }
    if (exists == 1)
    {
        std::cout << "Voilà:, the search exists! \n";
    }
    else
    {
        std::cout << "The search doesn't exist! \n";
    }
}

int main()
{
    //std::vector<int> integer {1, 2, 3, 4, 5};
    int integer[] {1, 2, 3, 4, 5};
    char vowels[] = {'a', 'e', 'i', 'o', 'u' };
    float floatingNumbers[] = {1.4, 2.5, 3.5, 6.7};

    Search(vowels) ;
    Search(integer);
    Search(floatingNumbers);
    return 0;
}
