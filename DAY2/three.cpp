#include <iostream>

// int main()
// {
//     int b=20;
//     const int a = 10;
//       //------------------------Here address can be change but balue can't
//     // a++;//not allowed
//     //int *p = &a//not allowed.
//     // value of type "const int *" cannot be used to initialize an entity of type "int *"

//     const int *p = &a; // p is pointer to the constant integer.
//     std::cout<<a<<"\n";
//     std::cout<<*p<<"\n";
//     std::cout<<&a<<"\n";
//     std::cout<<&p;
//     //*p=20;    //error
//     //++(*p);   //error
//     p=&b;       //works;
//     //*p=40;    //error

// }

// int main()
// {
//     int b=20;
//     int a=20;
//     int *const p=&a;
//     //p is constant pointer points to integer,
//     //---------------------------here value can be change but address cant.
//     //p=&b;// error
//     ++(*p);//allowed
//     *p=40;

// }




// int main()
// {
//     int b=20;
//     int a=b;

//     const int *const p=&a;
//-----------------------here addresss and value both cant be changed.
//     //p is the constant pointer points to the constant interger.
//     a=50;//works

//     // *p=30;//error
//     // p=&b;//error
// }
class A
{
    int x;

public:
    //A();
    A(int y)
    {
        x = y;
    }
};
int main()
{
   // A ob1;//errror we had to declare and define default constructor to call default objects.
    A ob2(400);
}