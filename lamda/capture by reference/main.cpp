#include <iostream>
//capture by reference, lambda
int main()
{
    int Id{10};
    auto changeId = [&Id] ()
    {
        Id = 14;
        return Id;
    };

    //use [&] () for all references

    std::cout << changeId();
    return 0;
}
