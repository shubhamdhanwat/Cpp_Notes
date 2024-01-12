#include <iostream>
#include <cstring>

class indexExceptiion : public std::exception
{
    char arr[50];

public:
    indexExceptiion(const char *msg)
    {
        strcpy(arr, msg);
    }
    const char *what()
    {
        return arr;
    }
};
class Product
{
    char pname[30];

public:
    Product()
    {
        strcpy(pname, "Laptop");
    }
    Product(char *p)
    {
        strcpy(pname, p);
    }
    char &operator[](int index)
    {
        if (!(index >= 0 && index < strlen(pname)))
            throw indexExceptiion("index out of range");

        return pname[index];
    }
    void operator()()
    {
        std::cout << pname;
    }
};
int main()
{
    Product p1;
    try
    {
        char ch = p1[0];
        std::cout << "ch = " << ch << std::endl;
    }
    catch (indexExceptiion i)
    {
        std::cout << i.what() << "\n";
    }
    p1[1] = 'A';

    p1();

    return 0;
}