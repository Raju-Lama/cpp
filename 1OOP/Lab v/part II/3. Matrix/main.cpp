#include <iostream>
/*
3. Create a class Matrix. Define a member function to find transpose
of a given matrix object. Your member function should return a
 transposed Matrix object.
*/
class Matrix
{
private:
    int m_matrix[2][3]{}; //suppose
    int m_transpose[3][2]{};
public:
    void setMatrix()
    {
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                std::cout << "row :: " << i + 1 << " column :: " << j + 1 << " :: ";
                std::cin >> m_matrix[i][j];
            }
        }
    }

    void transpose()
    {
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                m_transpose[i][j] = m_matrix[j][i];
            }
        }
    }

   /* Matrix RetTranspose()
    {
        Matrix obj{};
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                obj.m_transpose[i][j] = m_matrix[j][i];
            }
        }
        return obj;
    }
*/
    void getMatrix()
    {
        std::cout << "\n\n\nMatrix :: \n\n\n";
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                std::cout << m_matrix[i][j] << "\t";
            }
            std::cout << "\n\n\n";
        }

        std::cout << "Transpose :: \n\n\n";
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                std::cout << m_transpose[i][j] << "\t";
            }
            std::cout << "\n\n\n";
        }
    }
};

int main()
{
    Matrix trans{};
    std::cout << "Enter matrix elements :: \n";
    trans.setMatrix();

    trans.transpose();
    trans.getMatrix();

    //std::cout << trans.RetTranspose;
    return 0;
}
