#include <iostream>
#include "header.h"

int main()
{
  // Account::showRateofInterest();
  // Account cob;
  // cob.setBalance(56.7);
  // cob.display();
  // std::cout << "\nBalance of constant obj = " << cob.getBalance();

  // Account arr[3]={{3011,"Heena",2000.55}, {3012,"Anup",67000.45},{3013,"Ganesh",45000.33}};
  // for(int i=0;i<3;i++)
  // {
  //     arr[i].display();
  // }
  // int a=3011;
  // std::cout<<Search(arr,a);

  // Account *ptr=new Account();
  // ptr->display();
  // delete ptr;

  // Account obj;
  // obj.accept();
  // obj.display();
  // Account::display_count();

  //set function
   Account obj2(20112,"Jay",56000.55);
   obj2.display();
   obj2.setName("Ajay");
   std::cout<<"\n name = "<<obj2.getName();
   obj2.display();
  obj2.setBalance(85000.55);
  std::cout<<"\n updated balance = "<<obj2.getBalance();

  //Account::display_count();

  return 0;
}