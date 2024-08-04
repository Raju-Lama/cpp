#include <iostream>
/*
7. Define three namespaces Dollar, Rupee, and Dinar. Each namespace must contain two functions;
Conversion1(), Conversion2(). In Dollar namespace define the function Conversion1() such that it should
convert given rupee into dollar, and define the function Conversion2() such that it should convert given
dinar into dollar. Similarly, in Rupee namespace define the function Conversion1() such that it should
convert given dollar into rupee, and define the function Conversion2() such that it should convert given
dinar into rupee. Finally, in Dinar namespace define the function Conversion1() such that it should
convert given rupee into dinar, and define the function Conversion2() such that it should convert given
dollar into dinar. Write a main() to test each version of Conversion1(), and Conversion2(). (Namespace)
Given;
1 Dinar = 3 Dollar
1 Dollar = 111 Rupees
1 Dinar = 141 Rupees.
*/
namespace Dollar //it is not important namespace should start from capital letter
{
    void Conversion1() //rupee into Dollar
    {
        std::cout << "Enter Rupee :: ";
        double rupee{};
        std::cin >> rupee;
        std::cout << rupee / 111;
    }

    void Conversion2() //dinar into Dollar
    {
        std::cout << "Enter Dinar :: ";
        double dinar{};
        std::cin >> dinar;
        std::cout << dinar / 3;
    }
}

namespace Rupee
{
    void Conversion1() //dollar into rupee
    {
        std::cout << "Enter Dollar :: ";
        double dollar{};
        std::cin >> dollar;
        std::cout << dollar * 111;
    }

    void Conversion2()//dinar into rupee
    {
        std::cout << "Enter Dinar :: ";
        double dinar{};
        std::cin >> dinar;
        std::cout << dinar * 141;
    }
}

namespace Dinar
{
    void Conversion1()//rupee into Dinar
    {
        std::cout << "Enter Rupee :: ";
        double rupee{};
        std::cin >> rupee;
        std::cout << rupee / 141;
    }

    void Conversion2()//Dollar into Dinar
    {
        std::cout << "Enter Dollar :: ";
        double dollar{};
        std::cin >> dollar;
        std::cout << dollar * 3;
    }
}

int main()
{
    std::cout << "Choose between 3 options :: \n";
    std::cout << "1. Into Dollar  2. Into Rupee 3. Into Dinar :: ";
    int choice{};
    std::cin >> choice;
    switch(choice)
    {
    case 1://into Dollar
        {std::cout << "Choose rupee or Dinar to Convert into Dollar :: \n";
        std::cout << "1. Rupee to Dollar    2. Dinar into Dollar :: ";
        int ruOrDi{};
        std::cin >> ruOrDi;
        if (ruOrDi == 1)
        {
            Dollar::Conversion1();
        }
        else if (ruOrDi == 2)
        {
            Dollar::Conversion2();
        }
        else {std::cout << "Not valid!";}

        break;}

    case 2://into rupee
        {std::cout << "Choose Dollar or Dinar to Convert into Rupee :: \n";
        std::cout << "1. Dollar to Rupee    2. Dinar into Rupee :: ";
        int doOrDi{};
        std::cin >> doOrDi;
        if (doOrDi == 1)
        {
            Rupee::Conversion1();
        }
        else if (doOrDi == 2)
        {
            Rupee::Conversion2();
        }
        else {std::cout << "Not valid!";}
        break;}
    case 3://into dinar
        {std::cout << "Choose Dollar or Rupee to Convert into Dinar :: \n";
        std::cout << "1. Rupee to Dinar    2. Dollar into Dinar :: ";
        int ruOrDo{};
        std::cin >> ruOrDo;
        if (ruOrDo == 1)
        {
            Dinar::Conversion1();
        }
        else if (ruOrDo == 2)
        {
            Dinar::Conversion2();
        }
        else {std::cout << "Not valid!";}
        break;
        }
    default:
        {
        std::cout << "Wrong choice!";
        }
    }

    return 0;
}
