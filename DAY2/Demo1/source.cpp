#include <iostream>
#include <cstring>
#include "header.h"
// return_type classname::functioname(){  }
//Only static attributes are loaded before creation of the object ,It is stored in data section.value=0
float Account::rateofInterest = 8.5f;
int Account::count;

void Account::setAccno(int ano)
{
    accno = ano;
}
int Account::getAcco() const
{
    return accno;
}
void Account::setName(const char *nm)
{
    strcpy(name, nm);
}
void Account::setBalance(double b)
{
    balance = b;
}
double Account::getBalance() const
{
    return balance;
}
char *Account::getName()
{
    return name;
}

void Account::display_count()
{
    std::cout << "\nThe count of the account is " << count << ".";
}

Account::Account()
{
    std::cout << "\nAccount() called .... ";
    accno = 10111;
    strcpy(name, "Yash");
    balance = 55000;
    count++;
}
Account::Account(int n, const char *nm, double b)
    : accno(n), balance(b)
{
    strcpy(name, nm);
    count++;
}
void Account::showRateofInterest()
{
    std::cout << "\n Rateof Interest = " << rateofInterest;
}
void Account::display() const
{
    std::cout << "\n Account Number =" << accno;
    std::cout << "\n Account Name =" << name;
    std::cout << "\n Account Balance =" << balance << std::endl;
    // balance++;
}
void Account::accept()
{
    std::cout << "\n Enter the Account number =";
    std::cin >> accno;
    std::cout << "\n Enter the Account Name =";
    std::cin >> name;
    std::cout << "\n Enter the Account balance =";
    std::cin >> balance;
}
bool Search(Account p[3], int a)
{
    int flag = 0;

    for (int i = 0; i < 3; i++)
    {

        if (p[i].getAcco() == a)
        {
            flag = 1;
            std::cout << "\nThe account is found :";
            return flag;
        }
    }
    if (flag == 0)
    {
        std::cout << "\nThe account is not found :";
    }

    return flag;
}