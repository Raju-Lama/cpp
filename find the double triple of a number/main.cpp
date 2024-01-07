#include <iostream>

int main()
{
    //to find a double triple of a number;
    int num{};
    std::cout << "Enter a number :: ";
    std::cin >> num;
    int doublenum{num * 2};//initializing by calculating on the firsthand, it is a good practice instead assigning
    //as assigning makes the value of num get altered later on to use, we use these methods.
    std::cout << "The double of " << num  << " is :: " << doublenum << '\n';
    //another way of directly ouputting
    //this is a best practice though;
    std::cout << "The triple of " << num << " is :: " << num*3 << '\n';
    std::cout << "The fourth times of " << num << " is :: " << num*4 << '\n';
    std::cout << "The fifth of " << num << " is :: " << num*5 << '\n';
    std::cout << "The sixth of " << num << " is :: " << num*6 << '\n';
    std::cout << "The seventh of " << num << " is :: " << num*7 << '\n';
    return 0;
}
