#include <iostream>
#include <cmath>
//it is to use math functions
using namespace std;
//to find a maximum or minimum number;
int main()
{
    int a, b;//2 variables to compare later on
    cout << "Enter the 1st number: ";
    cin >> a;
    cout << "\nEnter the 2nd number: ";
    cin >> b;
    cout << "\n" << max(a,b) << " is the greatest.";//to find the greatest number
    cout << "\n" << min(a,b) << " is the smallest." <<endl;//to find the smallest number
    return 0;
}
