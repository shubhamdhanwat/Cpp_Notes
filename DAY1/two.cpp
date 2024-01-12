#include <iostream>
#include <cstring>
using namespace std;

class Account
{
    // data members/attributes/
    int accno;
    char name[20];
    double balance;

public:
    Account() // default constructure
    {
        accno = 1234;
        strcpy(name, "shub");
        balance = 3500;
    }
    // member functions
    Account(int ano, const char *nm, double bal) : accno(ano), balance(bal) // parameterized constructure
    {
        strcpy(name, nm);
    }
    void accept()
    {
        cout << "Enter the Account Number :";
        cin >> accno;
        cout << "\nEnter the Account Name  :";
        cin >> name;
        cout << "\nEnter the Account balance :";
        cin >> balance;
    }
    void display()
    {
        cout << "\nAccount number = " << accno<<"\n";
        cout << "\nAccount name = " << name<<"\n";
        cout << "\nAccount balance = " << balance<<"\n";
        cout<<"\n-----------------------------------------";
    }
};

int main()
{
    // Account arr[3] = {{2011, "hemant", 56000}, {2022, "ram", 65000}, {2011, "sham", 67690.3}};
    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].display();
    // }

    Account *ptr=new Account();  //DMA
    ptr->display();
    //create object/instance
    // Account obj;
    // obj.accept();
    // obj.display();
    // Account OBJ1(1223,"SHALU",45000);
    // OBJ1.display();

    delete ptr; //free the pointer ptr  memory, ptr remains in stack.
    //Comands to check memory likage valgrid.
    //1)comand to compile :g++ -g -o two  two.cpp
    //2)Comand to run : valgrind --tool=memcheck --leak-check=full ./two
    return 0;
}
