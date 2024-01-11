#include <iostream>
#include "add.h"//this is defined in the add.h header file
//we use "" quotes for declaring out header because it is to show that it was user declared.
int main()
{
    std::cout << "The sum of 3 and 4 is :: " << add(3, 4) << '\n';
    return 0;
}
