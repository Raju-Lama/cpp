// Replace ___ with your code

#include <iostream>

// import the cmath header file
#include <cmath>

using namespace std;

class Complex {
public:

    // create variables
    double real;
    double imag;

    // overload the / operator
    // the function must take a Complex object as a parameter
    Complex operator / (Complex obj) {

        // create the result object
        Complex result;

        // calculate the denominator for complex division
        // use the pow() function to calculate the squares
        double denominator =  pow(obj.real, 2) + pow(obj.imag, 2);

        // try block
        try {

            // throw 0.0 if denominator is 0
            if (denominator == 0)
            {
                throw 0.0;
            }

            // use complex division formula to divide the numbers
            result.real = (real * obj.real + imag * obj.imag) / denominator;
            result.imag = (imag * obj.real - real * obj.imag) / denominator;
        }

        // catch block with double parameter num
        catch (double num) {

            // assign num to member variables of result object
            result.real = num;
            result.imag = num;
        }

        // return result
        return result;
    }
};

int main() {

    // create complex1 and complex2 objects
    Complex complex1, complex2;

    // get input for real and imag variables of complex1
    cin >> complex1.real>> complex1.imag;

    // get input for real and imag variables of complex2
    cin >> complex2.real>> complex2.imag;

    // divide complex1 by complex2

    Complex result = complex1/complex2;

    // print the result in the format real + imag i
    if (result.imag < 0)
        cout << result.real << result.imag << "i";
    else
        cout <<result.real << "+" << result.imag << "i";

    return 0;
}
