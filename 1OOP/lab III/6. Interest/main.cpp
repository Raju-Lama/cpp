#include <iostream>
/*
6. Write function Interest () to calculate the interest.
The function should take a float value
for principal P, int value for time T, and float value for rate R.
Use a default value of 3.5 for rate R.
Write a main() that gets the values of P, and T from the user
to test the function.(Default Arguments)
*/
float Interest(float P, int T, float R)
{
    return (P*T*R)/ 100;
}
int main()
{
    std::cout  << "Enter Principle :: ";
    float p{};
    std::cin >> p;

    std::cout << "Enter Time :: ";
    int t{};
    std::cin >> t;

    std::cout << "Simple interest is :: " << Interest(p, t, 3.5);
    return 0;
}
