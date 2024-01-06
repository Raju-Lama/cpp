#include <iostream>
#include <string>
int main()
{
    //using namespace as follow for the concept of std::names for the libraries;
    using std::cout;//safer aldernative to using namespace standard as "using namespace std"
    using std::string;
    /*using namespace std;
    *we can ommit std:: to use any name from the library, but, there are 100's of std names
    *thus, declared in the global scope;
    */
    //not we don't have to write std::;
    cout << "Hello bro!";
    string name;
    name = "\n How is the code?";
    cout << name;//literal
    return 0;
}
