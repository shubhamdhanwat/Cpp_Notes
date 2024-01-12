#include <iostream>
#include <cstring>
#include "header.h"
// return_type classname::functioname(){  }
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
Account::Account()
{
    std::cout << "\nAccount() called .... ";
    accno = 10111;
    strcpy(name, "Yash");
    balance = 55000;
}
Account::Account(int n, const char *nm, double b)
    : accno(n), balance(b)
{
    strcpy(name, nm);
}
Account::~Account()
{
    std::cout<<"\nThe destructor is called ...";
   
}
void Account::display() const
{
    std::cout << "\nAccount number =" << accno;
    std::cout << "\nAccount Name =" << name;
    std::cout << "\nAccount balance =" << balance << std::endl;
    // balance++;
}
void Account::accept()
{
    std::cout << "\nEnter the Accout Number :";
    std::cin >> accno;
    std::cout << "\nEnter the Name :";
    std::cin >> name;
    std::cout << "\nEnter the Accout Balance :";
    std::cin >> balance;
}

bool Search(Account p[], int a, int b)
{
    for (int i = 0; i < b; i++)
    {
        if (p[i].getAcco() == a)
        {
            return true;
        }
    }
    return false;
}

void Modify(Account P[], int accno, double new_bal, int num)
{
    for (int i = 0; i < num; i++)
    {
        if (P[i].getAcco() == accno)
        {
            P[i].setBalance(new_bal);
            std::cout << "Balance Modified !!\n";
        }
    }
}

void Modify(Account P[], int accno, char *new_name, int num)
{
    for (int i = 0; i < num; i++)
    {
        if (P[i].getAcco() == accno)
        {
            P[i].setName(new_name);
            std::cout << "Name Modified !!\n";
        }
    }
}
