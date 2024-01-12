#ifndef HEADER_H
#define HEADER_H

class Rectangele
{
    int length;
    int breadth;
    public:
    Rectangele();
    Rectangele(int,int);
    Rectangele(Rectangele &);
    void display()const;
    Rectangele add(Rectangele &);
    Rectangele subtract(Rectangele &);
    bool compare(Rectangele &);
    double area();
    double preimeter();

};

#endif // HEADER_H
