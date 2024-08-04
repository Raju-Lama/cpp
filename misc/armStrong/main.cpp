// Replace ___ with your code

#include <iostream>

// create a function that checks if a number is armstrong
// prints the number is it is an armstrong number
// Hint: Look into the description above to find out the workflow of the check_armstrong() function
void arm(int n)
{
    int rem{};
    int arm{0};
    int num = n;

    while(n > 0)
   {
        rem = n % 10;
        arm = arm + rem*rem*rem;//since armstrong == sum(digit^3)
        n /= 10;
    }

    if (arm == num)
    {
        std::cout << num << '\n';//print if armstrong number
    }
}

int main() {

    // get input values for x and y
    int x{1}, y{1000};//check armstrong number from 1 to 1000
    //std::cin >> x >> y;

    // run loop from x to y
    // call check_armstrong() for each value from x
    while (x <= y) {
        arm(x);//call the function to check each number from 1 to 1000
        x = x + 1;
    }

    return 0;
}
