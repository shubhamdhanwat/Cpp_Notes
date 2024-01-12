#ifndef HEADER_H
#define HEADER_H

#include <iostream>
class Account
{
    int accno;
    char name[20];
    double balance;
    static float rateofInterest;
    static int count;

public:
    static void showRateofInterest();
    Account(); // declaration
    Account(int, const char *, double);
    void display() const;
    void accept();
    void setAccno(int);
    int getAcco() const;
    void setName(const char *);
    void setBalance(double);
    double getBalance() const;
    char *getName();
    static void display_count();
};

bool Search(Account p[], int a);

#endif // HEADER_H
