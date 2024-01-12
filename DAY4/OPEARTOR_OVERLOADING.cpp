
#include <iostream>
#include <cstring>
class Rectangele
{
    int length;
    int breadth;

public:
    Rectangele()
    {
        length = 6;
        breadth = 10;
    }
    Rectangele(int a, int b)
    {
        length = a;
        breadth = b;
    }
    friend Rectangele operator+(int n, Rectangele &);
    friend Rectangele operator-(int n, Rectangele &);
    friend std::ostream &operator<<(std::ostream &, const Rectangele &);
    Rectangele add(Rectangele &p)
    {
        Rectangele sumobj;

        sumobj.length = this->length + p.length;
        sumobj.breadth = this->breadth + p.breadth;
        std::cout << "After add function";
        return sumobj;
    }
    Rectangele operator+(Rectangele &p)
    {
        Rectangele sumobj;

        sumobj.length = this->length + p.length;
        sumobj.breadth = this->breadth + p.breadth;
        std::cout << "After add function";
        return sumobj;
    }
        Rectangele subtract(Rectangele &p)
    {
        Rectangele sumobj;

        sumobj.length = this->length - p.length;
        sumobj.breadth = this->breadth - p.breadth;
        std::cout << "After subraact function";
        return sumobj;
    }
    Rectangele operator-(Rectangele &p)
    {
        Rectangele sumobj;

        sumobj.length = this->length - p.length;
        sumobj.breadth = this->breadth - p.breadth;
        std::cout << "After subraact function";
        return sumobj;
    }
    Rectangele &operator++()
    {
        ++this->length;
        ++this->breadth;

        return *this;
    }
    Rectangele operator++(int)
    {
        Rectangele tempobj = *this;
        this->length++;
        this->breadth++;

        return tempobj;
    }

    Rectangele operator-()
    {
        Rectangele tempobj;
        tempobj.length = -this->length;
        tempobj.breadth = -this->breadth;

        return tempobj;
    }

    Rectangele operator+(int n)
    {
        Rectangele obj;
        obj.length = this->length + n;
        obj.breadth = this->breadth + n;

        return obj;
    }
    Rectangele operator-(int n)
    {
        Rectangele obj;
        obj.length = this->length - n;
        obj.breadth = this->breadth - n;

        return obj;
    }

    bool compare(Rectangele &p)
    {
        if (this->length == p.length && this->breadth == p.breadth)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool operator==(Rectangele &p)
    {
        if (this->length == p.length && this->breadth == p.breadth)
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
        std::cout << "\nLength =" << length;
        std::cout << "\nBreadth =" << breadth << std::endl;
    }
    int area()
    {
        int area;
        area = length * breadth;
        return area;
    }
    int perimeter()
    {
        int perimeter;
        perimeter = 2 * (length + breadth);
        return perimeter;
    }
};
Rectangele operator+(int n, Rectangele &r2)
{
    Rectangele obj;
    obj.length = n + r2.length;
    obj.breadth = n + r2.breadth;
    return obj;
}
Rectangele operator-(int n, Rectangele &r2)
{
    Rectangele obj;
    obj.length = n - r2.length;
    obj.breadth = n - r2.breadth;
    return obj;
}
std::ostream &operator<<(std::ostream &os, const Rectangele &r)
{
    os << r.length;
    os << r.breadth;
    return os;
}

int main()
{
    Rectangele r1(6, 10);
    // Rectangele r2(4, 7);
    // Rectangele r4(4, 7);
    // std::cout << r1;
    r1.display();

   // r1++;
   // r1.display();
    // r2.display();
    Rectangele r3;
    std::cout<<r1;
    // r3 = r1 + 10;
    // r3=10-r1;//el
    //  r3.display();
    //  r3 = r1 - 2;
    //  r3.display();
    //  r3 = r1 - r2;
    //  // r3=r1.add(r2);
    //  r3.display();
    //  bool n = r3 == r1;
    //  bool r = r2 == r4;
    //  std::cout << n;
    //  std::cout << r;
    //  r2.display();

    // Rectangele R4;
    // //R4=++r1;
    // R4.display();
    // r1.display();
    r3=r1++;
    r3.display();
    r1.display();

    // //r3=r1.subtract(r2);
    // r3.display();
    // std::cout<<"\nAfter comparing "<<r1.compare(r2);
    // std::cout<<"\nThe Area of the Rectangle is :"<<r1.area();
    // std::cout<<"\nThe Perimeter of the Rectangle is :"<<r1.perimeter();

    return 0;
}

