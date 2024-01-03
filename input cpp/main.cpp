#include <iostream>

//using namespace std; since we are using std::cout, cin we do not have to use this now.
int main()
{
    int num{};
    std::cout <<"Enter a number: ";//character out
    std::cin >>num;//character in
    std::cout <<'\n';
    std::cout << "\nYou have entered " << num <<".\n"<< std::endl;

    //using 2 inputs at the same time now;
    int x{};
    int y{};//best practice we declare all the variables in separate lines;
    std::cout <<"Enter any two number: ";
    std::cin >> x >>y;
    std::cout <<"\nThe you have entered " <<x <<" and " <<y <<".\n";

    /*endl is end line, it takes cursor to a new line, but, its drawback is that is
    *it flushes buffer every time it is used, along with going to a new line so
    *\n' is a preferred way
    *it using only '\n', we can have to use single inverted comma(')
    *but, we can use inside the double inverted comma("); along with outputting text.
    */

    //note: << is an insertion operator, but, >> is an extraction operator

    return 0;//it doesn't matter even if you use return 1 or put any value instead of 0;
}
