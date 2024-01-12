#include<iostream>
#include<cstring>
#include"header.h"

float Account::rateofInterest=8.5f;
int Account::count=0;

Account::Account()
    {
        std::cout<<"\nThe default constructor ...";
        Accno=40;
        Acconame= new char[20];
        strcpy(Acconame,"Rahul");
        Balance=56000;
        count++;

    }
Account::Account(int accno, const char * name,double bal):Accno(accno),Balance(bal)
    {
        std::cout<<"\nParametrized constructor ........";
        Acconame= new char[20];
        strcpy(Acconame,name);
        count++;
    }    
Account::Account(Account & p)
    {
        std::cout<<"\n Copy constructor is called ...........";
        Accno=p.Accno;
        Acconame=new char[strlen(p.Acconame)+1];
        strcpy(Acconame,p.Acconame);
        Balance=p.Balance;
    }

Account::~Account()
    {
        std::cout<<"\nThe destructor is called.....";
    }

    void Account::Display() const
    {
        std::cout << "\nAccount No :" << Accno;
        std::cout << "\nAccount Name :" << Acconame;
        std::cout << "\nAccount Balance :" << Balance;

}

void Account::Accept()
{
    std::cout<<"\nEnter the Account Number :";
    std::cin>>Accno;
    std::cout<<"\nEnter the Account Name :";
    std::cin>>Acconame;
    std::cout<<"Enter the Account Balance :";
    std::cin>>Balance;

}

void Account::setAccountNo()
{
    int accno;
    std::cout<<"\nEnter the new Account Number :";
    std::cin>>accno;
    Accno=accno;
}

int Account::getAccountNo() const
{
    return Accno;
}

void Account::displayrateofinterest()
{
    std::cout<<"\nThe rate of interest is:"<<rateofInterest;
}

void Account::displaycount()
{
    std::cout<<"\nThe count of the Account present is :"<<count;
}

void Account::setAccountName()
{
    std::cout<<"Enter the new Account Name :";
    char arr[20];
    std::cin>>arr;
    strcpy(Acconame,arr);

}

char *Account::getAccountName() 
{
    return Acconame;
}

bool Account::comapare(Account &p)
{
    if(this->Accno==p.Accno)
    {
        return true;
    }

    return false;
}
