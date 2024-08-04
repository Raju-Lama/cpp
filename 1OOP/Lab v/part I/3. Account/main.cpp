#include <iostream>

/*
3. Define a class ACCOUNT with following specifications:
a. Data Members
i. Name of the depositor
ii. Account number
iii. Balance amount in the account
b. Member Function
i. To assign initial values(define inside the class definition)
ii. To deposit an amount(define outside the class definition)
iii. To withdraw an amount after checking the balance.
iv. To display name, account number and balance.
*/

class ACCOUNT
{
private:
    std::string m_name{};
    int m_account{};
    double m_amount{};

public:
    ACCOUNT(std::string name, long long int acc, double amt)//constructor
        :m_name{name},
        m_account{acc},
        m_amount{amt}
    {
    }

    void deposit(double amt);//forward declaration, it should be define outside

    void withDraw(double amt);

    void getinfo()//getter
    {
        std::cout << "Name :: " << m_name << "  Account number :: " << m_account << '\n';
        std::cout << "Balance :: " << m_amount << '\n';
    }
};

void ACCOUNT::deposit(double amt)
{
    m_amount += amt;//deposited ammount adding to the balance
    std::cout << "Deposited :: " << amt << '\n';
}

void ACCOUNT::withDraw(double amt)//to withdraw
{
    if (m_amount < amt)
    {
        std::cout << "Not enough balance!\n";
    }
    else if(m_amount > amt)
    {
        m_amount -= amt;
    }
    else { std::cout << "Enter a valid amount! \n"; }

    std::cout << "With drawn :: " << amt << '\n';
}


int main()
{
    ACCOUNT savings{"John Cena", 1000101, 5000};
    std::cout << "\tSelect options\n\t\t[1. Display info   2. Deposit  3. Withdraw ] :: ";
    int select{};
    std::cin >> select;
    if (select == 1)//DISPLAY
    {
        savings.getinfo();
    }
    else if (select == 2)//deposit
    {
        std::cout << "Enter amount to deposit :: ";
        double dep{};
        std::cin >> dep;
        savings.ACCOUNT::deposit(dep);

        savings.getinfo();// and display
    }
    else if (select == 3)//withdraw
    {
        std::cout << "Enter amount to With draw :: ";
        double wit{};
        std::cin >> wit;
        savings.ACCOUNT::withDraw(wit);

        savings.getinfo();// and display    }
    else { std::cout << "Not a valid selection!\n"; }

    return 0;
}
