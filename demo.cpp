#include<iostream>
using namespace std;

class rec
{
    int a;
    public:
    int price(int x)
    {
        a=x;
        cout<<a;
    }
    int price(int &y)
    {
        a=y;
    }

   
};
int main()
{
    rec obj;
    int num1=10;
   // obj.price(num1);





}

//     int x,y;
// //  x=5;
// // y=~x;
// x=-23;
// y=~x;
// cout<<y;

