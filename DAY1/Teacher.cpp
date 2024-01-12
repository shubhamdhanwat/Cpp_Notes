#include <iostream>
using namespace std;
class Teacher
{ // attributes ,data members
    char name[20];
    int Salary;
    char Position[20];
    char subject[20];

    // member functions
public:

    void accept()
    {
        cout << "Enter the Teachers name : ";
        cin >> name;
        cout << "Enter the Teachers Subject : ";
        cin >> subject;
        cout << "Enter the Teachers Position : ";
        cin >> Position;
    }

    void Teach()
    {
        cout << "The Teachers name is:" << name;
        cout << "\nThe Teachers subject is :" << subject;
        cout << "\nThe Teachers positio  is " << Position;
    }
};
int main()
{
    Teacher T1;
    T1.accept();
    T1.Teach();
}