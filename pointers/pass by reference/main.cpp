#include <iostream>
//pass by reference
#include <string>
void passRef(std::string &ref)
{
    std::cout << ref;
}
int main()
{
    std::string str {"John Cena\n"};
    passRef(str);
    return 0;
}
