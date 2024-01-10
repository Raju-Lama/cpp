#include <iostream>
int add(int x, int y);// this is a forward declaration
// it uses the identifier of the function to link the externals source code files.

int input();
int main()
{
    int x{input()};
    int y{input()};
    std::cout << "The sum of " << x << " and " << y << " is :: " << add(x, y) << '\n';
    return 0;//works fine
}
