#include<iostream>
#include<cstring>
#include"header.h"

Account::Account()
{
    std::cout<<"\nCall to the deafault constructor...";
    accono=134;
    Acconame=new char[20];
    strcpy(Acconame,"Rakesh");
    Balance=2542;
}
Account::Account(int acc_no,const char* nm, double bal):accono(acc_no),Balance(bal)
{
    Acconame=new char[20];
    strcpy(Acconame,"nm");
}
Account::~Account()
{
    std::cout<<"\nThe call to the destructor .";
    delete Acconame;
}
void Account::accept()
{
    std::cout<<"\nEnter the Account Number :";
    std::cin>>accono;
    std::cout<<"\nEnter the Account Name :";
    std::cin>>Acconame;
    std::cout<<"\nEnter the Account Balance :";
    std::cin>>Balance;
}
void Account::display()const
{
    std::cout<<"\nThe Account Number :";
    std::cout<<accono;
    std::cout<<"\nThe Account Name :";
    std::cout<<Acconame;
    std::cout<<"\nThe Account Balance :";
    std::cout<<Balance;
}
int Account::get_Accno()const{
    return accono;
}

bool search(Account arr [], int acc_no,int num)
{
    int flag=0;
    for(int j=0;j<num;j++)
    {
        if(arr[j].get_Accno()==acc_no)
        {
            flag=1;
            std::cout<<"\nThe account is found.";
            return flag;

        }
    }
    std::cout<<"\nThe accoutn is not found .";
    return flag;

}