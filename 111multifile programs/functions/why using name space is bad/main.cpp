#include <iostream>
//using namespace std;
//this is not a good practice, since, its main job is to use the namespace that is already available as std::cout;
void cou();//forward declaration
int man();

int main()
{
    std::cout << "Hello world!" << '\n';
    man();
    cou();
    return 0;
}
