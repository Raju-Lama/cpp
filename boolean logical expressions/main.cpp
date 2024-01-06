#include <iostream>
#include <string>
using namespace std;

//boolean are useful to create logical expressions
int main()
{
    //to see if a person is eligible to vote or not
    int age;
    string result;
    cout << "Enter your age: ";
    cin >> age;
    //using ternary operator for conditional checking.
    result = (age >= 18) ? "\n\n\n              You are eligible to vote!\n\n\n" : "\n\n\n              You are not eligible to vote!\n\n\n";
    cout << result;
    return 0;
}
