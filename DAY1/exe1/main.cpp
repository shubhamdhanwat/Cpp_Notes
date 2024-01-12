#include<iostream>
#include"header.h"

int main()
{
    // Account arr[3] = {{3011, "hemant", 5600.0}, {2022, "ram", 6.5000}, {2011, "sham", 67690.3}};
    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].display();
    // }
    Account *ptr=NULL;
    ptr=new Account();
    ptr->display();
    delete ptr;
    // create object
    // Account obj;
    // // obj.accept();
    //  obj.display();
    // Account OBJ1(1223,"SHALU",45000);
    // OBJ1.display();
    // Account obj2(OBJ1);
    // obj2.display();

    return 0;
}