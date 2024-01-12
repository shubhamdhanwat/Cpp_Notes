#include<iostream>
#include<cstring>
class Rectangele
{
    int length;
    int breadth;


    public:
    Rectangele()
    {
        length=0;
        breadth=0;
    }
    Rectangele(int a ,int b )
    {
        length=a;
        breadth=b;

    }
    Rectangele add(Rectangele &p)
    {
        Rectangele sumobj;

        sumobj.length=this->length+p.length;
        sumobj.breadth=this->breadth+p.breadth;
        std::cout<<"After add function";
        return sumobj;

    }
    
    Rectangele subtract(Rectangele &p)
    {
        Rectangele sumobj;

        sumobj.length=this->length-p.length;
        sumobj.breadth=this->breadth-p.breadth;
        std::cout<<"After subraact function";
        return sumobj;

    }
    bool compare(Rectangele & p)
    {
        if(this->length==p.length && this->breadth==p.breadth)
        {
            return true;

        }
        else
        {
            return false;
        }
    }
    const void display()
    {
        std::cout<<"\nLength ="<<length;
        std::cout<<"\nBreadth ="<<breadth<<std::endl;
    }
    int area()
    {
        int area;
        area=length*breadth;
        return area;
    }
    int perimeter()
    {
        int perimeter;
        perimeter=2*(length+breadth);
        return perimeter;
    }


};
int main()
{
    Rectangele r1(6,10);
    Rectangele r2(4,7);
    r1.display();
    r2.display();
    Rectangele r3;
    r3=r1.add(r2);
    r3.display();
    // //r3=r1.subtract(r2);
    // r3.display();
    std::cout<<"\nAfter comparing "<<r1.compare(r2);
    std::cout<<"\nThe Area of the Rectangle is :"<<r1.area();
    std::cout<<"\nThe Perimeter of the Rectangle is :"<<r1.perimeter();

    return 0;

}

