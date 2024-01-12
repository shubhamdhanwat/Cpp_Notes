#include<iostream>
using namespace std;

//pass by reference
// void exchange(int &,int &);

// int main()
// {
//     int c=10,d=20;
//     exchange(c,d);//Actual Parameters.
//     cout<<"\n c= "<<c<<"d= "<<d;
    
// }
// void exchange(int &i,int &j)//formal  Parameters.
// {
//     int t;
//     t=i;
//     i=j;
//     j=t;
// }

//-----------------------------------------------------------------------------
    // int a[5]={10,20,30,40,50};
    // int *p=a;
    // cout<<p<<"\n";    // address of the zerothe location.0x7ffffe0c7980
    // cout<<*p<<"\n";  // the value at the zeroth location 10
    // p++;
    // cout<<p<<"\n";  // address of the first the location.0x7ffffe0c7984
    // cout<<*p<<"\n"; // the value at the first location .20
//------------------------------------------------------------------------------
    // int b=10;
    // int *p1=&b;
    // cout<<"address of p1 when assign p1 to b "<<p1<<"\n";//0x7fff5302df9c
    // cout<<"value of p1"<<*p1;/// 10 value of p1  10;
    // cout<<b;//10

    // int c=30;
    // p1=&c;

    // cout<<"address of p1 when assign to c "<<p1<<"\n";//0x7fff5302dfa0
    // cout<<"value of p1"<<*p1;//value of p1 30
//------------------------------------------------------------------------------
    //Reference Operator .r is the integer reference .
    // No memory is allocated to the reference that is r has no memory.
    //r is nick name or alias.
    // int k=100;
    // int &r=k;   
    // cout<<r<<"\n";  //100
    // cout<<&r<<"\n"; //0x7fffff06bedc
    // cout<<&k;       //0x7fffff06bedc
//---------------------------------------------------------------------------
// int k=10;

// int* getk()
// {
//     return &k;  //return by address
// }
// int main()
// {

//     int *z=getk();
//     cout<<*z;   //10
// }    
//-----------------------------------------------------------------------
int& geth(int t)
{
    return t;
}
int main()
{                            //error occurs on compilation .
    int h=20;                //reference to local variable is not allowed.
    int m= geth(h);
    cout<<m;
}    
//------------------------------------------------------------------------------------------
    // int h=40;
    // //int &y;             //error. reference variable y requires and initializer at 
                             //the time of declaration.
    // //int &y=100;        // error .reference variable y cant be assign to a constant.
    // int &y=h;            //works
    // cout<<y;             // output 40;
    //refernce can refer to existing memory location.
    //No memory gets allocated for constants.
//-------------------------------------------------------------------

    // int e=30;
    // int f=20;
    // int &y=f;
    // cout<<"value of y"<<y; //20
    // cout<<"\nvalue of f"<<f; //20
    // cout<<"\nValue  of e"<<e;//30
    // y=e;
    // cout<<"\nvalue of y"<<y;//30
    // cout<<"\nvalue of f after y=e"<<f;//30
//----------------------------------------------------------------------------
