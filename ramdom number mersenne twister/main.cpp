#include <iostream>
#include <random>

int main()
{
    std::mt19937 mt{};//instantiating
    for(int i{1}; i <= 40; i++)
        {
            std::cout << mt() << '\t';

            if(i % 5 == 0)
                std::cout << '\n';
        }

    return 0;
}
