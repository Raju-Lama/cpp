#include <iostream>
//4. WAP to convert Centigrade into Fahrenheit temperature. ( F= 9*C/5 + 32)
float centigradeToFarenheit(float centigrade)
{
    return (9*centigrade/5) + 32;
}

int main()
{
    float centigrade;
    std::cout << "Enter Centrage :: ";
    std::cin >> centigrade;

    std::cout << centigrade << " == " << centigradeToFarenheit(centigrade) << " Farenheit";
    return 0;
}
