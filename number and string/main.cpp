#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num {10};
    string str = "Jai Shree Ram";
    cout << num + str << endl;// this results in error, as string and integer cannot be expressed or concatinated.
    return 0;
}
