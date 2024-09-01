#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:

    // attributes
    double real;
    double imag;

public:

    // constructor to initialize variables with default values
    Complex() : real(0.0), imag(0.0) {}

    // constructor to initialize variables with custom values
    Complex(double r, double i) : real(r), imag(i) {}

    // overload the + operator
    Complex operator + (Complex arg) {

        Complex complex_sum;

        // add the real and imaginary parts separately
        complex_sum.real = this->real + arg.real;
        complex_sum.imag = this->imag + arg.imag;

        return complex_sum;
    }

    // overload the - operator
    Complex operator - (Complex arg) {

        Complex complex_difference;

        // subtract the real and imaginary parts
        complex_difference.real = this->real - arg.real;
        complex_difference.imag = this->imag - arg.imag;

        return complex_difference;
    }

    // overload the * operator
    Complex operator * (Complex arg) {

        Complex complex_product;

        // use complex multiplication formula
        complex_product.real = (this->real * arg.real) - (this->imag * arg.imag);
        complex_product.imag = (this->real * arg.imag) + (this->imag * arg.real);

        return complex_product;
    }

    // overload the / operator
    Complex operator / (Complex arg) {

        Complex complex_division;

        try {

            double denominator = pow(arg.real, 2) + pow(arg.imag, 2);

            // throw an exception if denominator is 0
            if (denominator == 0)
                throw 0;

            // use complex division formula
            complex_division.real = ((this->real * arg.real) + (this->imag * arg.imag)) / denominator;
            complex_division.imag = ((this->imag * arg.real) - (this->real * arg.imag)) / denominator;
        }

        catch (int num) {

            // print the error message and exit the program
            cout << "Error! Cannot divide by " << num << endl;
            exit(0);
        }

        return complex_division;
    }

    // method to return the result
    string get_result() {

        string result;

        if (imag == 0) {
            result = to_string(real);
        }
        else if (imag < 0) {
            result = to_string(real) + " - " + to_string(abs(imag)) + "i";
        }
        else {
            result = to_string(real) + " + " + to_string(imag) + "i";
        }

        return result;
    }
};

int main() {

    Complex complex1(5, -10);
    Complex complex2(0, 0);

    // divide complex1 by complex2
    Complex division = complex1 / complex2;

    cout << "Division = " << division.get_result() << endl;

    // subtract complex2 from complex1
    Complex difference = complex1 - complex2;

    cout << "Difference = " << difference.get_result() << endl;

    return 0;
}
