#include<iostream>
int main()
{
    int a=10,b=0;
    try
    {
        if(b==0)
             throw "division by zero not possible .";
        int c=a/b;
        std::cout<<c;    
    }
    catch(const char *msg)
    {
        std::cout << msg<<'\n';
    }
    std::cout<<"\nthe second line of execution after the try catch block ";
    
    return 0;
}
