#include <iostream>

/*
5.	Create a class Matrix. Then write a program to find transpose of a given matrix object,
which is passed as a function argument. Use the concept of friend function.
 Your friend function should return a transposed matrix object.
*/

class Matrix
{
    int m_atrix[2][3];
    int t_ranspose[3][2];
    /*
    Matrix(int mat[2][3])
        : m_atrix{}
    {
    }
    */
public:

    void setData()
    {
        std::cout << "Enter Matrix values :: \n";

        for(int i{0}; i < 2; ++i)
        {
            for(int j{0}; j < 3; ++j)
            {
                std::cout << "M" << i << j << " :: ";
                std::cin >> m_atrix[i][j];
            }
        }
    }

    void display()
    {
        std::cout << "The transpose matrix for :: \n";
        for(int i{0}; i < 2; ++i)
        {
            for(int j{0}; j < 3; ++j)
            {
                std::cout << m_atrix[i][j] << '\t';
            }

            std::cout << '\n';
        }

        std::cout << " Transpose :: \n";

        for(int i{0}; i < 3; ++i)
        {
            for(int j{0}; j < 2; ++j)
            {
                std::cout << t_ranspose[i][j] << '\t';
            }

            std::cout << '\n';
        }
    }

    friend void transpose(Matrix& x);
};

void transpose(Matrix& x)
{
    for(int i{0}; i < 2; ++i)
    {
        for(int j{0}; j < 3; ++j)
        {
            x.t_ranspose[j][i] = x.m_atrix[i][j];
        }
    }
}


int main()
{
    Matrix m{};
    m.setData();
    transpose(m);
    m.display();

    return 0;
}
