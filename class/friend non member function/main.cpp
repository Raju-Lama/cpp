#include <iostream>
// accessing class member using non member function with friend keyword

class Connect
{
private:
    int m_id{5};

public:

    friend void Friendship(const Connect& connect);//forward declaration

};

void Friendship(const Connect& connect)
{
    std::cout << connect.m_id;
}

int main()
{
    Connect mem{};
    Friendship(mem);//calling non member function.
    return 0;
}
