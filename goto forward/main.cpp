#include <iostream>

//goto state can also move forward instead of only heading backwards
void dogOrCat(bool skip);

int main()
{
    dogOrCat(true);
    //dogOrCat(false);
    return 0;
}
void dogOrCat(bool skip)
{
    if(skip)
        goto dog;
    else
        goto cat;
    cat:
        std::cout << "Cat \n";

    dog:
        std::cout << "Dog\n ";
}
