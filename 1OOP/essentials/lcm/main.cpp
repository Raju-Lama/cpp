#include <iostream>

// create function find_LCM() with parameters num1 and num2
// compute lcm of two values and return it
//least common multiples to check between any two or more numbers
// lcm(a, b) = (a*b)/hcf(a, b) ;
int Lcm(int x, int y)
{
    int lcm {1};

    if (x > y)
        lcm = x;//the greatest number is assigned lcm;
    else
        lcm = y;

    int size{lcm};
//to increase fix size as multiples of the largest number

    while(true)
    {
        if (lcm % x == 0 && lcm % y == 0)
        {
            break;//this is the condition
        }
        lcm += size;//to increase fixed size
    }
    return lcm;
}

int main() {

    // get input value for x and y
    int x, y;
    std::cout << "Enter two numbers :: ";
    std::cin >> x >> y;

    // call find_LCM() with arguments x and y
    int lcm = Lcm(x, y);

    // print the returned value
    std::cout << lcm;

    return 0;
}
