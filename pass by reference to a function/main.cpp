#include <iostream>
#include <string>

//to avoid expensive copy like string copy, as they are class types, so, reference is used instead

void passRef(std::string& ref)
{
    std::cout << ref;
    ref = "Under taker";
}
int main()
{
    std::string x{"John Cena\n"};
    passRef(x);//it was easier if we passed integer value to make a copy, but, its different with string
    std::cout << x;//value of x is now changed to under taker.. efficient copy
    return 0;
}
