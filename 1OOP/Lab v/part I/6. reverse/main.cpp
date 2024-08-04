#include <iostream>
/*
6. Define a class SAMPLE with data member an array of character.
Write a member function called ReverseIt() that reverse
a string (an array of character). Use a for loop that swaps the first and last
character, then the second, and next-to last character and so on.
*/

class SAMPLE
{
private:
    std::string m_str{};

public:
    void ReverseIt(std::string& str)
    {
        m_str = str;
        int length{0};
        for (int i = 0; m_str[i] != '\0'; i++)
        {
            length++;
        }

        char temp{};
        int lastlen{length - 1};

        for (int i = 0; i <= length / 2; ++i)
        {
    //swapping first and last characters
            temp = m_str[i];
            m_str[i] = m_str[lastlen];
            m_str[lastlen] = temp;
            lastlen--;
        }
    }

    void display()
    {
        std::cout << "ReverseIt :: " << m_str;
    }
};
int main()
{
    SAMPLE reverseIt{};
    std::cout << "Enter a string :: ";
    std::string str{};
    std::getline(std::cin, str);
    reverseIt.ReverseIt(str);

    reverseIt.display();
    return 0;
}
