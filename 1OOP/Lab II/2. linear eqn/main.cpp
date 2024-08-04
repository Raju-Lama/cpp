#include <iostream>
/*
2. WAP using function (pass by reference) that calculates
the values of x and y from the two linear equations.
ax + by = m
cx + dy = n
The solutions are given as;
x = (md-bn)/(ad-cb)
y = (na-mc)/(ad-cb)
*/
void Pass(int& a, int& b, int& c, int& d, int& m, int&n)
{
    int x {(m*d - b*n) / (a*d - c*b)};
    int y = { (n*a - m*c) / (a*d - c*b)
     };
    std::cout << "x :: " << x << '\n';
    std::cout << "y :: " << y << '\n';
}

int main()
{
    std::cout << "Enter values for a, b, c, d, m, and n respectively :: ";
    int a, b,c, d, m, n;
    std::cin >> a >> b >> c >> d >> m >> n;
    Pass(a, b, c, d, m, n);
    return 0;
}
