#include <iostream>
#include <cstring>
#include "header.h"
// return_type classname::functioname(){  }

int Product::count;

Product::Product()
{
    std::cout << "\nProduct() called default constructor .... ";
    prodno = 10111;
    name = new char[20];
    strcpy(name, "Yash");
    price = 500;
    count++;
}
Product::Product(int n, const char *nm, int b)
    : prodno(n), price(b)
{
    std::cout << "\nProduct() called parameterized constructor .... ";
    name = new char[20];
    strcpy(name, nm);
    count++;
}
Product::Product(Product &p3)
{
    std::cout << "\nProduct() called copy constructor .... ";
    prodno = p3.prodno;
    name = new char[strlen(p3.name) + 1];
    strcpy(name, p3.name);
    price = p3.price;
    count++;
}
Product::~Product()
{
    std::cout << "\nDestructor dev  called ...........";
    delete name;
}
void Product::accept()
{
    std::cout << "\nEnter the product No :";
    std::cin >> prodno;
    std::cout << "\nEnter the Product Name :";
    std::cin >> name;
    std::cout << "\nEnter the Price :";
    std::cin >> price;

}
void Product::display() const
{
    std::cout << "\nAccount number =" << prodno;
    std::cout << "\nName =" << name;
    std::cout << "\nPrice =" << price;
}

void Product::set_name()
{
    std::cout << "\nEnter the new name :";
    std::cin >> name;
}

void Product::get_name()
{
    std::cout << "Name :" << name;
}

void Product::set_prodno(int prodn)
{
    prodno=prodn;
    
}

int Product::get_prodno() const
{
    return prodno;
}

bool Product::campare(Product &p3)
{
    if (prodno == p3.prodno)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Product::ret_count()
{
    std::cout<<"\nThe count of the product is :"<<count;

}
