#include <iostream>
//copying value of one object variable to another

class CopyConstructor
{
public:
    int x;
    int y;
    CopyConstructor(int i, int j)//parameterized constructor
        :x{i},
        y{j}
    {
    }

    CopyConstructor(CopyConstructor& obj)
    {
        x = obj.x;
        y = obj.y;
    }
};
int main()
{
    CopyConstructor obj1{5, 5};
    CopyConstructor obj2{obj1};

    std::cout << obj2.y;
    return 0;
}
