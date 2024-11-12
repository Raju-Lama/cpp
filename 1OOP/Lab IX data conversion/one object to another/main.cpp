#include <iostream>

/*6. Write a program to convert object of class Dollar to object of class Rupee.
Attributes of class Dollar are DI and Cent and that of class Rupee are Rs and Paisa.
(all attributes must have float type)
a. 1$= 100 Cent,
b. 100 Rs = 1$,
c. 100 Paisa = 1 Rs.
*/
class Dollar
{
public:
    float DI, Cent;
};

class Rupee
{
public:
    float Rs, Paisa;
};

int main()
{

    return 0;
}
