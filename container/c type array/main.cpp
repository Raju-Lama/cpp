#include <iostream>
//just like c,
int main()
{
    int num[10];
    int n[] {1, 2, 3, 4, 5};
    char vowels[] {"aeiou"};

    for(auto ch: vowels)
    {
        std::cout << ch << '\n';
    }
    return 0;
}
