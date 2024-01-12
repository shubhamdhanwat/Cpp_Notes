#ifndef HEADER_H
#define HEADER_H
#include<iostream>
#include<cstring>
class Account
{
    int Accno;
   // char Acconame[20];
   char* Acconame;
    double Balance;
    static float rateofInterest;
    static int count;
    public:
    Account();
    Account(int accno, const char * name,double bal);
    Account(Account &);
    ~Account();
    void Display()const;
    void Accept();
    void setAccountNo();
    int getAccountNo()const;
    static void displayrateofinterest();
    static void  displaycount();
    void setAccountName();
    char * getAccountName();
    bool comapare(Account &);



};

#endif // HEADER_H
