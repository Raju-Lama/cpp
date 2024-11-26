#include <iostream>
// 4. Write a program to show multiple catch statements during exception handling.
//#include <exception>
//use the exceptions to see the real type of errors returning exception objects

int divide(int numerator, int denominator)
{
    try
    {
        if (denominator == 0)
        {
            throw "ZeroDivisionError";
        }
        else if (denominator == 0.0)
        {
            throw 0.0;
        }
        else if (numerator == 0)
        {
            throw numerator;
        }
        else
        {
            throw 'X';
        }


        return numerator/denominator;
    }

    catch(const char* text)
    {
        std::cout << text << '\n';
        return 0;
        //incase of error return 0 to main;
        //else it will return 1
    }
    catch(float)
    {
        std::cout << "Value 0.0!" << '\n';
        return 0;
    }
    catch(int)
    {
        std::cout << "Numerator is 0!" << '\n';
        return 0;
    }
    catch(char)
    {
        std::cout << "Value is char type!" << '\n';
    }
}

int main()
{
    std::cout << divide('x', 0.0);
    return 0;
}
