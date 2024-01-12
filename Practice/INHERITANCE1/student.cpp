#include <iostream>
#include "student.h"
#include"header.h"

Student::Student()
{
    std::cout << "\nThe call to the default constructor of the student ..\n";
    rollno = 12;
    Name = "Shubham";
}

Student::Student(int roll_no, std::string nam, int pcode, std::string cty, std::string stat)
: rollno(roll_no), Name(nam), address(pcode,cty,stat)
{
    std::cout << "\nThe call to the parameterized constructor of the student ...\n";
}

Student::~Student()
{
    std::cout<<"\nThe call to the destructor of the student..\n";
}

void Student::Accept()
{
    address.Accept();
    std::cout<<"\nEnter the student roll no :";
    std::cin>>rollno;
    std::cout<<"\nEnter the student name :";
    std::cin>>Name;

}

void Student::Display() const
{
    std::cout<<"\nThe roll no of the student is :"<<rollno;
    std::cout<<"\nThe name of the student is :"<<Name;
    address.Display();


}
