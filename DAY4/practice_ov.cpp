#include <iostream>
#include <cstring>
// opearator overloading is making basic operators to work on customs  builds objects.

class Marks
{
    int intmarks;
    int extmarks;

public:
    Marks()
    {
        std::cout << "\nThe default constructor .";
        intmarks = 0;
        extmarks = 0;
    }
    Marks(int x, int y)
    {
        std::cout << "\nThe parameterized constructor .";
        intmarks = x;
        extmarks = y;
    }
    ~Marks()
    {
        std::cout << "\nThe destructor is called .";
    }
    void display() const;
    Marks operator*(Marks M);
    Marks operator+(Marks M);
    Marks operator-(Marks N);
    Marks operator/(Marks N);
};

int main()
{
    Marks m1(10, 20);
    m1.display();
    Marks M2(2, 5);
    Marks m3 = m1 * M2;
    m3.display();
    m3=m1/M2;
    m3.display();
}

void Marks::display() const
{
    std::cout << "\nInternal Marks :" << intmarks;
    std::cout << "\nExternal Marks :" << extmarks;
}

Marks Marks::operator*(Marks M)
{
    Marks tempobj;
    tempobj.intmarks = this->intmarks * M.intmarks;
    tempobj.extmarks = this->extmarks * M.extmarks;
    return tempobj;
}

Marks Marks::operator-(Marks N)
{
    Marks temp;
    temp.intmarks = this->intmarks - N.intmarks;
    temp.extmarks = this->extmarks - N.extmarks;
    return temp;
}
Marks Marks::operator/(Marks N)
{
    Marks temp ;
    temp.intmarks=this->intmarks/N.intmarks;
    temp.extmarks=this->extmarks/N.extmarks;
    return temp;
}
Marks Marks::operator+(Marks M)
{
    Marks temp;

    temp.intmarks = this->intmarks + M.intmarks;
    temp.extmarks = this->extmarks + M.extmarks;

    return temp;
}