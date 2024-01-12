#include<iostream>
#include<cstring>
#include"header.h"

int main()
{
    Rectangele r1(3,2);
    std::cout<<"\nR1";
    r1.display();
    Rectangele r2(3,2);
    std::cout<<"\nR2";
    r2.display();
    Rectangele r3;
    r3=r1.add(r2);
    std::cout<<"\nR3 after r1+ r2";
    r3.display();
    Rectangele r4(10,10);
    std::cout<<"\nR4";
    r4.display();
    r4=r3.subtract(r1);
    std::cout<<"\nR4 after r3-r1";
    r4.display();
    r1.compare(r2);
    std::cout<<r3.area()<<"\n";
    std::cout<<r1.preimeter();




    return 0;

}