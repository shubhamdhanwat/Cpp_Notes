#include<iostream>
#include<cstring>
#include"header.h"

Rectangele::Rectangele()
{
    std::cout<<"\nThe default con...";
    length=0;
    breadth=0;
}
Rectangele::Rectangele(int new_length,int new_breadth)
{
    length=new_length;
    breadth=new_breadth;
    std::cout<<"\nThe para con...";
    
}
Rectangele::Rectangele(Rectangele & R1)
{
    std::cout<<"\nThe para con...";
    length=R1.length;
    breadth=R1.breadth;
}

void Rectangele::display() const
{
    std::cout<<"\nThe length ="<<length;
    std::cout<<"\nThe breadth ="<<breadth;
}

double Rectangele::preimeter()
{
    double perimeter;
    perimeter=2*(length+breadth);
    return perimeter;
}
double Rectangele::area()
{
    double area;
    area=length*breadth;
    return area;
}

Rectangele Rectangele::add(Rectangele &R1)
{
    Rectangele tempobj;
    tempobj.length=this->length+R1.length;
    tempobj.breadth=this->breadth+R1.breadth;
    return tempobj;
}

Rectangele Rectangele::subtract(Rectangele &R1)
{
    Rectangele tempobj;
    tempobj.length=this->length-R1.length;
    tempobj.breadth=this->breadth-R1.breadth;
    return tempobj;
}
bool Rectangele::compare(Rectangele & c)
{
    int flag=0;
    if(this->length==c.length && this->breadth==c.breadth)
    {
        flag=1;
        std::cout<<"\nThe Rectangeles are equal .";
        return flag;

    }
    else
    {
        flag=0;
        std::cout<<"\nThe Rectangeles are not equal .";
        return flag;

    }

}