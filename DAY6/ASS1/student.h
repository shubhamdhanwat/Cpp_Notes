#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "header.h"

class student // container class
{
    int rollno;
    std::string name;
    address p_address; // contained class

public:
    student();
    student(int, std::string, std::string, int, std::string);
    ~student();
    void display();
    void accept();
};

#endif // STUDENT_H
