#include<iostream>
class Test
{
    char *ptr;

    public:
    Test()
    {
        ptr=new char[2000];
    }
    ~Test()
    {
        delete ptr;
    }

};

void divide(int a,int b)
{
    Test arr[20];
    Test *tarr=new Test[30];
    Test *t1=new Test;
    int *p=new int[1000];
    if(b==0)
    {
        delete p;
        delete t1;
        throw "denominator cannot be zero ";
    }
    
    int c=a/b;

    delete p;
    delete t1;
}

int main()
{
     int a=10,b=0;
    try
    {
             divide(a,b);
    }
    catch(const char * msg)
    {
        std::cout<<msg;
    }

    // --------------------------
     
    int  n=4,f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    std::cout<<"factorial = "<<f<<std::endl;

}