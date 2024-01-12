#include<iostream>
using namespace std;
void add(int a,int b,int c=5,int d=20)
{
    cout<<a+b+c+d;
}
int main()
{
    add(5,4,0);

    return 0;
}