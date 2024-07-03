#include <iostream>

//static variable are the members of class rather than being members of objects
//they don't need to be instantiated by an object if they are public, so we may use :: to access
//nevertheless, we can also use static functions to access those with :: operator if they are private
class PrivateStatic
{
private:
    static const int s_member{4};//since it is made constant, it can directly now be defined here

public:
    static inline int getVar() { return s_member; }
};
int main()
{
    //lets not instantiate any object of PrivateStatic
    std::cout << PrivateStatic::getVar() << '\n';//access directly with function
    //static functions belong to class rather than object,
    return 0;
}
