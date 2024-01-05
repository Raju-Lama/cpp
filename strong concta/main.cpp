#include <iostream>
#include <string>//this is a header library file for the string
using namespace std;

int main()
{
    string first_name;//we need to define the variable/identifier with a keyword and unique name.
    string lastName;
    //string fullName = first_name + lastName;//we can concatenate
    string fullName = first_name.append(lastName);//concatenating or appending both are same.

    cout << "Enter your First name: ";//using insertion operator << for outputting
    cin  >>first_name;//using extraction operator >> for inputting
    cout <<"\nEnter your Last name: ";
    cin  >>lastName;
    cout <<"\nHello " + first_name + " " + lastName + "! How do you do?" <<endl;//string concat;
    //string concatenation is just like javascript
    //not the other way to concatenate is to use append();
    //cout <<"\nHello! " ; cout<<fullName; full name is not printing;
    return 0;
}
