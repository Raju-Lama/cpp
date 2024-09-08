#include <iostream>
//3.	WAP to swap private data members of two classes using friend function.
class Y;
class X
{
    int x_id{};

public:

    X(int x)
        :x_id{x}
    {
    }

    void getXid()
    {
        std::cout << "x_id :: " << x_id << '\n';
    }

    friend void swap(X& x, Y& y);
};

class Y
{
    int y_id{};

public:

    Y(int y)
        :y_id{y}
    {
    }

    void getYid()
    {
        std::cout << "y_id :: " << y_id << '\n';
    }

    friend void swap(X& x, Y& y);
};


void swap(X& x, Y& y)
{
    int temp;
    temp = x.x_id;
    x.x_id = y.y_id;
    y.y_id = temp;
}
int main()
{
    X xid{5};
    Y yid{6};

    std::cout << "Before swap :: \n";
    xid.getXid();
    yid.getYid();

    std::cout << "After swap:: \n";
    swap(xid, yid);
    xid.getXid();
    yid.getYid();
    return 0;
}
