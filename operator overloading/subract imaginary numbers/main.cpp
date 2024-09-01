#include <iostream>
class Complex {
public:

    // create variables
    double real;
    double imag;

    Complex()
    {
    }

    Complex(double r, double i)
        :real{r},
         imag{i}
    {
    }

    // Overload the - operator
    Complex operator- (Complex& sec) {

        // create the result object

        Complex result;
        // subtract the real and imaginary parts separately
        result.real = real - sec.real;
        result.imag = imag - sec.imag;

        // return the result
        return result;
    }
};


int main() {

    // create complex1 and complex2 objects
    Complex complex1{2, 4}, complex2{3, 2};

    // subtract complex2 from complex1
    Complex result {complex1 - complex2};

    // print the result in the format real + imag i
    if (result.imag < 0)
        std::cout << result.real << result.imag << "i" << std::endl;
    else
        std::cout << result.real << "+" << result.imag << "i" << std::endl;

    return 0;
}
