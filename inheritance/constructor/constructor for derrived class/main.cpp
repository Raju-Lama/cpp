#include <iostream>
//inheritance

//if there is a constructor in the base class, it is compulsory to have a new constructor
//in the derrived class

//only members and functions that are either protected or public are inherited
class Base
{
    //int m_id;

protected:

    int m_pro_id;

public:

    int m_pub_id;

    /*Base()
        :m_pro_id{}
    {
    }//default constructor
    */

    Base(int x, int y)
    {
        //m_id = x;
        m_pro_id = x;
        m_pub_id = y;
    }

    int getPubId()
    {
        return m_pub_id;
    }
};

class Derrived : public Base
{
public:

    Derrived(int x, int y)//have to use copy initialization
        :Base{x, y} //use list or direct initializer, to initialize the constructor of Base
    {

    }
};

int main()
{
    Base base{2, 3};

    Derrived derrived{3, 4};

    std::cout << derrived.getPubId();
    return 0;
}
