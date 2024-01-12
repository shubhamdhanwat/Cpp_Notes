#ifndef STUDENT_H
#define STUDENT_H
#include "header.h"
#include <iostream>

class Student
{
    int rollno;
    std::string Name;
    Address address;

public:
    Student();
    Student(int roll_no, std::string nam, int pcode, std::string cty, std::string stat);
    ~Student();
    void Accept();
    void Display() const;
};

#endif // STUDENT_H
