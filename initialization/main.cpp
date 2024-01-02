#include <iostream>

using namespace std;

int main()
{
    //about initialization of a variable
    int a = 14;//copy initialization
    int b (15);//direct initialization
    int c {16};//list initialization or braces initialization
    int d ();//value is 1
    int e {};//zero initialization, value is 0
    int f {0};
    cout << "The variable value are:\n a: "
    <<a <<"\n b: " <<b <<"\n c: " <<c <<"\n d: " <<d <<"\n e: " <<e <<"\n f: " <<f << endl;
    return 0;
}
