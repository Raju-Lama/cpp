#include <iostream>
#include <string>
#include <string_view>// for std::string_view
//std::string_view to copy the string for only reading purpose, not to modify
void copystr1(std::string str1)//this makes the string copy too expensive as it is slow to copy string
{
    std::cout << str1;//prints the result but, this is slow
}

void copystr2(std::string_view str2)//good approach, as it only reads doesn't copy
{
    std::cout << str2;
}
int main()
{
    std::string str1{"john Cena"};
    //it is slow and it allocates memory for the copying even while initializing

    std::string_view {"Under Taker"};
    //it is a good approach
    copystr1(str1);
    copystr2(str2);//good approach

    return 0;
}
