#include <iostream>
#include <cstring>
class Product
{
    int productno;
    char *pname;
    double price;

public:
    Product() // default constructor
    {
        productno = 10111;
        pname = new char[7];
        strcpy(pname, "Laptop");
        price = 55000;
    }
    // parameterized ctor
    Product(int pno, const char *pnm, double p) : productno(pno), price(p)
    {
        pname = new char[20];
        strcpy(pname, pnm);
    }
    Product(const Product &p3)
    {
        std::cout << "\n in copy ctor";
        productno = p3.productno;
        pname = new char[strlen(p3.pname) + 1];
        strcpy(pname, p3.pname);
        price = p3.price;
    }

    void display()
    {
        std::cout << "\n Product number = " << productno;
        std::cout << "\n Product name = " << pname;
        std::cout << "\n Product price = " << price;
    }
    void accept()
    {
        std::cout << "\nAEnter Product number = ";
        std::cin >> productno;
        char temp[50];
        std::cout << "\nAEnter Product name = ";
        std::cin >> temp;
        pname = new char[strlen(temp) + 1];
        strcpy(pname, temp);
        std::cout << "\nAEnter Product price = ";
        std::cin >> price;
    }
    ~Product()
    {
        delete pname;
        std::cout << "\n ~Product() called ";
    }
    bool compare(Product &p3)
    {
        if (price == p3.price)
            return true;
        else
            return false;
    }
    Product& operator=(Product &p3)
    {
        productno = p3.productno;
        price = p3.price;

        if (this != &p3)
        {
            // solve memory leakage
            delete this->pname; // free memory of pname pointer of p1 object
            pname = new char[strlen(p3.pname) + 1]; // avoid dangling pointer
            stpcpy(pname, p3.pname);
        }
        return *this;
    }
};
int main()
{
    Product p1(1011, "Mobile", 45000);
    Product p3(1002, "Chair", 1000);
     Product p2(1004, "TV", 75000);

    p1 = p3; // assignment p1.operator(p3)
    p1.display();
    p3.display();

    p1 = p3 = p2;
    p1.display();
    p2.display();
    p3.display();

    return 0;
}