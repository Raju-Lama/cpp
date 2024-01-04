#include <iostream>
#include <string>//header library for the string is must;
using namespace std;

int main()
{
    string firstName;//keyword for a string;
    string lastName;
    cout << "Enter your First name: ";
    cin >> firstName;//inputting name
    cout << "Enter your Last name: ";
    cin >> lastName;//inputting name
    cout << "\nHello " <<firstName <<" " <<lastName <<"!\n";//outputs only a word, but, ommits everything after a space in the 1st word
    return 0;
}
