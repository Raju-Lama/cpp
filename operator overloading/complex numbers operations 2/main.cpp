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

    // constructor to initialize variables
    Complex (double r, double i) : real{r}, imag{i} {}

    // Overload the + operator
    Complex operator+ (Complex& obj) {

        // create the result object
        // pass (0, 0) to its constructor
        Complex result(0, 0);

        // use complex addition formula
        result.real = real + obj.real;
        result.imag = imag + obj.imag;

        // return result
        return result;
    }

    // Overload the - operator
    Complex operator- (Complex& obj) {

        // create the result object
        Complex result(0, 0);

        // use complex subtraction formula
        result.real = real - obj.real;
        result.imag = imag - obj.imag;

        // return result
        return result;
    }

    // Overload the * operator
    Complex operator * (Complex& obj) {

        // create the result object
        Complex result(0.0, 0.0);

        // use complex multiplication formula
        result.real = real * obj.real - imag * obj.imag;
        result.imag = real * obj.imag + imag * obj.real;

        // return result
        return result;
    }

    // Overload the / operator
    Complex operator / (Complex& obj) {

        // create the result object
        Complex result(0.0, 0.0);

        // calculate the denominator using pow()
        double denominator = pow(obj.real, 2) + pow(obj.imag, 2);

        // use complex division formula to divide the numbers
        result.real = (real * obj.real + imag * obj.imag)/denominator;
        result.imag = (imag*obj.real - real * obj.imag)/ denominator;

        // return result
        return result;
    }
};

int main() {

    // create complex1 object
    Complex complex1(20.0, 30.0);

    // create complex2 object
    Complex complex2(10.0, 15.0);

    // create result object
    Complex result(0.0, 0.0);

    // get char input for op
    char op;
    cin >> op;

    // switch...case to perform the operation
    switch(op) {

        // case for addition
        case '+':
            result = complex1 + complex2;
            break;
        // case for subtraction
        case '-':
            result = complex1 - complex2;
            break;
        // case for multiplication
        case '*':
            result = complex1 * complex2;
            break;
        // case for division
        case '/':
            result = complex1 / complex2;
            break;
        // when op is invalid
        default:

            // print "Invalid Operator!"
            cout << "Invalid Operator!";

            // exit the program
            exit(0);
    }

    // print the result in the format real + imag i
    if (result.imag < 0)
        cout << result.real << result.imag << "i";
    else
        cout << result.real << "+" <<result.imag << "i";

    return 0;
}
