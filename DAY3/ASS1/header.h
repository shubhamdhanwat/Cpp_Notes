#ifndef HEADER_H
#define HEADER_H

#include <iostream>
class Product
{
    int prodno;
    char *name;
    int price;
    static int count;

public:
    Product();
    Product(int, const char *, int);
    Product(Product &);
    ~Product();
    void display() const;
    void accept();
    void set_name();
    void get_name();
    void set_prodno(int);
    int get_prodno()const;
    bool campare(Product &);
    static void ret_count();
};

#endif // HEADER_H