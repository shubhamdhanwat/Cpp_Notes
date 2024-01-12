#include <iostream>
#include <cstring>
#include "header.h"

// return_type Classname::functin_name(){}
Account::Account()
{
    std::cout << "The Account() default constructure called :";
    accno = 123;
    strcpy(name, "shubham");
    balance = 34444.22;
}

Account::Account(int n, const char *nm, double bal) : accno(n), balance(bal)
{
    std::cout << "The Account() parameterized called :";
    strcpy(name, nm);
}
Account::Account(const Account & A1)
{
    std::cout<<"\nThe Account() call to the copy constructor .......";
    accno=A1.accno;
    strcpy(name,A1.name);
    balance=A1.balance;
}
Account::~Account()
{
    std::cout<<"\nDestructor is called .";
}
void Account::display()
{
    std::cout << "\nThe Account number is :" << accno << "\n";
    std::cout << "\nThe Account Name is :" << name << "\n";
    std::cout << "\nThe Account balance is :" << balance << "\n";
}

void Account::accept()
{
    std::cout << "\nEnter the Account Number :";
    std::cin >> accno;
    std::cout << "\nEnter the Account Name :";
    std::cin >> name;
    std::cout << "\nEnter the Account Balance :";
    std::cin >> balance;
}