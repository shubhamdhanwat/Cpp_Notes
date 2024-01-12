#include<iostream>
template<class T>
void exchange(T &a,T &b)
{
    T t;
    t=a;
    a=b;
    b=t;

}
int main()
{
    int n1=10,n2=20;
    exchange(n1,n2);
    std::cout<<"N1="<<n1<<"\nN2="<<n2;
    char c1='c',c2='d';
    exchange(c1,c2);
    std::cout<<"\nN1="<<c1<<"\nN2="<<c2;
    return 0;
}