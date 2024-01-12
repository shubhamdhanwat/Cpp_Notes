#include <iostream>
#include <cstring>
#include "student.h"
using namespace std;
class student
{ // attributes ,data members
    char name[20];
    int std;
    char div[2];
    char emailid[30];

    // member functions
public:
    student()
    {
        cout << "Default constructor"<< "\n";
        strcpy(name, "Raj");
        std = 10;
        strcpy(div, "A");
        strcpy(emailid, "shubhamd6800@gmail.com");
    }
    student(const char *nm, int sd, const char *d, const char *email_id) : std(sd)
    {
        cout << "Parameterized Constructor is called \n";
        strcpy(name, nm);
        strcpy(div, d);
        strcpy(emailid, email_id);
    }
    student(student & s)
    {
        cout<<"\nThe call to the copy constructor..........";
        strcpy(name,s.name);
        std=s.std;
        strcpy(div,s.div);
        strcpy(emailid,s.emailid);
    }
    ~student()
    {
        cout << "\nDestructor is called";
    }
    void accept()
    {
        cout << "\nEnter the name :";
        cin >> name;
        cout << "\nEnter the std :";
        cin >> std;
        cout << "\nEnter the div :";
        cin >> div;
        cout << "\nEnter the emailid :";
        cin >> emailid;
    }

    void display()const
    {
        cout << "\nThe name of the student is :" << name;
        cout << "\nThe std of the student is :" << std;
        cout << "\nThe div of the student is : " << div;
        cout << "\nThe emailid of the student is :" << emailid << "\n";
    }
    void setstd(int st)
    {
        std=st;
    }
    int getstd()const
    {
        return std;
    }

    int getStd() const { return std; }
    void setStd(int std_) { std = std_; }
};
int main()
{
    // student s1;
    // //s1.accept();
    // student s2{"ram",2,"C","ram@fakld"};

    // s1.display();
    // s2.display();
    // s1.setstd(1);
    // cout<<"New std :"<<s1.getstd();
    // s1.display();
    int num;
    cout << "\nEnter the no of student you want: ";
    cin >> num;
    student *s1 = NULL;
    s1 = new student[num];
    for (int i = 0; i < num; i++)
    {
        s1[i].display();
    }
   delete[] s1;

    student s2 = {"Komal", 10, "A", "komal@gmail.com"};
     s2.display();
         student s4(s2);
     s4.display();

    // student s3;
    // s3.accept();
    // s3.display();

    return 0;

}
