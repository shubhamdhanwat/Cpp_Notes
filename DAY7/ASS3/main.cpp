// class Account
// {
//     int balance;
//     public:
//     Account(int bal=5000)
//     {
//         balance=bal;

//     }
//     void withdraw(int amount)
//     {
//         if(balance-amount<3000)
//             throw "balance is low ..";
//         balance-=amount;    
//     }
//     void display()
//     {
//         std::cout<<"\nThe balance is :"<<balance;
//     }

// };

// int main()
// {
//     Account A;
//     try
//     {
//         A.withdraw(5000);
//     }
//     catch(const char * msg)
//     {
//         std::cout<<msg;

//     }
    
//     A.display();
// }

#include<iostream>
#include<cstring>

class Lowbalanceexception :public std::exception
{
    char arr[60];
    public:
    Lowbalanceexception(const char * msg)
    {
        strcpy(arr,msg);
    }

        const char *what()
        {
            return arr;
        }

};

class Account
{
    int balance;

    public:
    Account(int b=5000)
    {
        balance=b;
    }
    void withdraw(int amount)
    {
        if(balance-amount < 3000)
            throw  Lowbalanceexception("minimum balance should be 3000") ;
        
        balance-=amount;
    }
    void display()
    {
        std::cout<<"\n Balance = "<<balance<<std::endl;
    }
};
int main()
{
    Account a1(15000);
    try
    {
        a1.withdraw(14000);
    }
    catch(Lowbalanceexception l)
    {
        std::cout<<l.what()<<std::endl;
    }
     
  
    a1.display();

}