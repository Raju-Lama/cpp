#include <iostream>

//global static function
class Stat
{
    private:
    static inline int m_int{1};//this variable is for class, not object

    public:
    static int getInt();//declaration
};
int Stat::getInt() {return m_int; }

int main()
{
    std::cout << Stat::getInt();
    return 0;
}
