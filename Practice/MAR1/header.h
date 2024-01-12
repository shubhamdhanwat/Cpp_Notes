#ifndef HEADER_H
#define HEADER_H

class Account
{
    int accono;
    char * Acconame;
    double Balance;
    public:
    Account();
    Account(int,const char *,double);
    void display()const;
    ~Account();
    void accept();
    int get_Accno()const;



};
bool search(Account arr[], int acc_no,int );

#endif // HEADER_H
