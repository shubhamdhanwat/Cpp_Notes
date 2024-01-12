#include<iostream>
#include"header.h"
#include<cstring>

int main()
{
    Account::displayrateofinterest();
    Account obj;
    //obj.Accept();
    obj.Display();
   // obj.setAccountNo();
   // std::cout<<"The new acccount number is :"<<obj.getAccountNo();
  //  obj.Display();
   
    Account OBJ2(2534,"kapik",41234);

   // OBJ2.setAccountName();
   // std::cout<<"\nThe new acccount name is :"<<OBJ2.getAccountName();
    OBJ2.Display();

    Account obj3(OBJ2);
    obj3.Display();
    Account ob;
    int a=ob.comapare(OBJ2);
    if (a==1)
    {
        std::cout<<"\n The account is found.";
    }
    else
    {
        std::cout<<"\nThe account is not found .";
    }


    Account::displaycount();



    //int num;
    // std::cout<<"\nEnter the number of account you want to create ...";
    // std::cin>>num;
    // Account *obj1=NULL;
    // obj1= new Account[num];
    // for(int i=0;i<num;i++)
    // {
    //     obj1[i].Display();
    // }
    // //obj1->Display();
    // delete[] obj1;
    return 0;
}