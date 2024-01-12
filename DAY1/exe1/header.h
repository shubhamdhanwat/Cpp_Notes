#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <cstring>

class Account
{
    int accno;
    char name[20];
    double balance;

public:
    Account(); // declaration
    Account(int, const char *, double);
    Account(const Account&);
    void display();
    void accept();
    ~Account();
};

#endif // HEADER_H
