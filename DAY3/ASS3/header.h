#ifndef HEADER_H
#define HEADER_H
class Account
{
    int accno;
    char name[20];
    double balance;

public:
    Account(); // declaration
    Account(int, const char *, double);
    ~Account();
    void display() const;
    void accept();
    void setAccno(int);
    int getAcco() const;
    void setName(const char *);
    void setBalance(double);
    double getBalance() const;
    char *getName();
    
};

bool Search(Account p[], int ,int);
void Modify(Account P[], int,double,int );
void Modify(Account P[], int,char*,int);

#endif // HEADER_H
