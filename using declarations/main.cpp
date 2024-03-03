#include <iostream>

//using namespace std; this is a using directive method, but, not preferrable
//this practice is bad , and its now outdated,
//using-declaration could be a good approach
int main()
{
    using std::cout;//using-declaration//tells compiler cout means std::cout
    cout << "Hello world!" << '\n';
    cout << "Hello world!" << '\n';
    cout << "Hello world!" << '\n';
    cout << "Hello world!" << '\n';
    return 0;
}
