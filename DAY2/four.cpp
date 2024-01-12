#include <iostream>
#include <cstring>
using namespace std;

// Polymorphism - functions with same name
// poly - many , morph-forms- many forms of same message
class Math
{
    //
public:
    static void add(int a, int b)
    {
        std::cout << " int+int sum = " << a + b;
    }
    static void add(int a, float b)
    {
        std::cout << "\n int+float sum = " << a + b;
    }
    static void add(int a, int b, int c)
    {
        std::cout << " \nint+int+int sum = " << a + b + c;
    }
    static void add(double d1, double d2)
    {
        std::cout << " \ndouble+double sum = " << d1 + d2;
    }
    static void add(float d1, float d2)
    {
        std::cout << "\n float+float sum = " << d1 + d2;
    }
};
int main()
{
    Math::add(10, 20);
    Math::add(10.5f, 3.6f);
    Math::add(10.0, 29.0);
    Math::add(2.5, 3.6);
}