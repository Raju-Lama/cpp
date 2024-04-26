#include <iostream>
//friend class
class Dude
{
private:
    int m_id{};

public:
    Dude(int id)
        :m_id{id}
    {
    }

    friend class Gal;//dude is her friend now, but, dude is not friend of her unless gal puts him in her list
};

class Gal
{
private:
    int m_no{};

public:
    Gal(int num)
        :m_no {num}
    {
    }
        void print(const Dude& dude)
        {
            std::cout << dude.m_id << '\n' ;
        }
};

int main()
{
    Dude boy{2};
    Gal girl{3};

     girl.print(boy);//prints 2

    return 0;
}
