#include <iostream>
#include <string>
using namespace std;
int main()
{
    string fullname;
    cout << "Enter your full name: ";
    getline(cin, fullname);// using getline() would be easier to take lines of strings as inputs
    cout << "\nYour full name is : " << fullname <<endl;
    return 0;
}
