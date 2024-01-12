#include<iostream>
#include"student.h"


student::student()
{
    std::cout<<"\n THe student default student ()";
    rollno=12;
    name="rahul";

}
student::student(int rn,std::string nm,std::string ct,int pc,std::string st):rollno(rn),name(nm),p_address(ct,pc,st)
{
    std::cout<<"\nTHe student para.........";
}
student::~student()
{
    std::cout<<"\nThe STUDENT DESTRUCTOTR ";
}
void student::display()
{
    std::cout<<"\nRoll no:"<<rollno;
    std::cout<<"\n name :"<<name;
    p_address.display();
}
 void student::accept()
 {
    std::cout<<"Enter the ";

 }
