#include <iostream>
#include <vector>
//a basic array type container

int main()
{
    std::vector <int> numbers{1, 2, 3, 4, 5};//list type container with 5 fixed elevemnts
    std::vector <int> num(5); //num vector container with capacity to hold 4 elements in its contigous memory location
    std::vector vowels{ 'a', 'e', 'i', 'o', 'u' };//its default character
    std::cout << vowels[0];
    return 0;
}
