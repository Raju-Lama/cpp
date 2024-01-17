#include <iostream>
int input();//forward declaration
int palindrome(int x);//
int main()
{
    int real{input()};//value initialized by calling the input function
    int rev{palindrome(real)};//value initialized by calling function palindrome(); passing arguement to calculate;
    if(real == rev)
        std::cout << "The number is a Palindrome!";
    else
        std::cout << "The number is not a Palindrome!";
    return 0;

}
