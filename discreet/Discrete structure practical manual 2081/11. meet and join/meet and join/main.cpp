#include <iostream>
//11. WAP to perform to find the meet and joins of two boolean matrices
//join = or operation
//meet << and operation
int main()
{
    int row{2}, col{2};
    std::cout << "Enter values of the matrix A :: \n";
    bool A[row][col];
    for (int i{0}; i < row; ++i)
    {
        for(int j{0}; j < col; ++j)
        {
            std::cout << "A" << i << j << " :: ";
            std::cin >> A[i][j];
        }
    }

    std::cout << "Enter values of the matrix B :: \n";
    bool B[row][col];
    for (int i{0}; i < row; ++i)
    {
        for(int j{0}; j < col; ++j)
        {
            std::cout << "B" << i << j << " :: ";
            std::cin >> B[i][j];
        }
    }

    bool join[row][col];
    bool meet[row][col];

    for (int i{0}; i < row; ++i)
    {
        for(int j{0}; j < col; ++j)
        {
            join[i][j] = A[i][j] && B[i][j]; //meet
            meet[i][j] = A[i][j] || B[i][j]; //join
        }
    }

    std::cout << "Meet 'And operation':: \n";
    for (int i{0}; i < row; ++i)
    {
        for(int j{0}; j < col; ++j)
        {
            std:: cout << join[i][j] << "  ";//meet

        }
        std::cout << "\n\n";
    }

    std::cout << "Join 'Or operation':: \n";
    for (int i{0}; i < row; ++i)
    {
        for(int j{0}; j < col; ++j)
        {
            std:: cout << meet[i][j] << "  ";//meet

        }
        std::cout << "\n\n";
    }




    return 0;
}
