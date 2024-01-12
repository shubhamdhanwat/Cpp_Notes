#include <iostream>
#include "header.h"

int main()
{
    // Product P1;
    // P1.display();
    Product P3={5454,"iron",6000};
    // P3.display();
    // P1.set_name();
    // P1.display();
    // P3.set_prodno(35353);
    // P3.display();


    // Product *p2 = new Product[2]();
    // p2[0].display();
    // p2->set_name("sham");
    // p2->get_name();
    // p2[0].display();
    // delete[] p2;
    //Comands to check memory likage valgrid.
    //1)comand to compile :g++ -g -o two  two.cpp
    //2)Comand to run : valgrind --tool=memcheck --leak-check=full ./two
    //valgrind --tool=memcheck ls -l
    Product p1;
    Product p2(p1);
    p2.display(); 
    int a;
    a=p1.campare(p2);
    if(a==0)
    {
        std::cout<<"\nThe product not found .";
        
    }
    else
    {
        std::cout<<"\nThe product found .";
    }
    std::cout<<"\nThe output of the compare : "<<a;

    Product::ret_count();

    return 0;
}