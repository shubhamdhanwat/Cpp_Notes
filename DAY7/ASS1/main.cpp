#include<iostream>
class A
{
    int arr[20];
    int a,b,c,d,f,g;

};
class B:public virtual A
{
    int m;

};
class C:public virtual A
{
    int k;

};
class D:public B,public C
{
    int t;

};
int main()
{
    D obj;
    std::cout<<"The size of :"<<sizeof(obj);
    return 0;
}