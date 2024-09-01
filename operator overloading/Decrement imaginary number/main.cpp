#include <iostream>

class Complex {
public:
    int real, imag;

    // constructor to initialize member variables
    Complex (int r, int i) : real(r), imag(i) {}

    // overload the -- operator
    // return object of Complex type
    Complex operator -- () {

        // create temporary Complex object
        // pass 0 as arguments to its constructor
        Complex temp{0, 0};

        // decrement real of calling object
        // assign the result to temp.real
        temp.real = --real;

        // decrement imag of calling object
        // assign the result in temp.imag
        temp.imag = --imag;

        // return the temp object
        return temp;
    }
};

int main() {

    // get integer input for real and imag
    std::cout << "Enter real and Imaginary values :: ";
    int real, imag;
    std::cin >> real >> imag;

    // create Complex object
    // pass real and imag to constructor
    Complex complex(real, imag);

    // create another Complex Object
    // pass 0 as arguments to its constructor
    Complex result(0, 0);

    // use the overloaded -- operator on complex object
    // assign the return value to result object
    result = --complex;

    // check if result.imag is a negative number
    if (result.imag < 0) {

        // print real & imag variables of result without + sign
        std::cout << result.real  << result.imag << "i";
    }
    else {
        // print real & imag with "+" string in between
        std::cout << result.real << "+" << result.imag << "i";
    }

    return 0;
}
