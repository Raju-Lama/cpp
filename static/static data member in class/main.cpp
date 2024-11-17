#include <iostream>
//to define static data member, it should also be defined
//outside the class with classname::data_member
class Data
{
public:
    static int count;
    //it is the property of class, but, not object
    //static member and functions are particular to class
    //not particular to objects


    Data()
    {
        countMembers();
    }
    static void countMembers()
    {
        //we can only access static members for static functions
        ++count;
        //but we can create or define non static variable inside static function
        //but we can create or define non static variable inside static function
        //increment by 1
    }

};
int Data::count = 0;
//type className::DataName

int main()
{
    Data obj, obj1, obj2, obj3;
    //obj.count++;
    //std::cout << obj.count;

    //call static function
    //Data::countMembers();
    std::cout << Data::count;
    //4 objects are created
    return 0;
}
