#include <iostream>
#include <string>
using namespace std;

int main(){

    string str;
    cout << "Enter a word: ";
    cin >> str;
    cout << "\nThe first letter of the word you entered is " << str[0];
    //accessing the first character of the string
    cout << "\nThe second letter is " << str[1];
    //the second character
    cout << "\nThe third letter is " << str[2];//the third character now
    cout << "\n the first letter is now replaced with a character 'A'.";
    str[0] = 'A';//character is replaced in the string
    cout << "\nThe string you entered is now " <<str <<endl;//the new string
    return 0;


}
