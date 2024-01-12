#include "header.h"
#include <cstring>
Marks::Marks()
{
    std::cout << "\nDefault constructor of the marks class ";
    roll_number = 0;
    strcpy(name, "student_name");
    marks = 0;
}
Marks::Marks(int roll_n, char *nm, int mark) : roll_number(roll_n), marks(mark)
{
    strcpy(name, nm);
}

void Marks::Accept()
{
    std::cout << "\nEnter the roll no of the student :";
    std::cin >> roll_number;
    std::cout << "\nEnter the student name :";
    std::cin >> name;
}

void Marks::Display() const
{
    std::cout << "\nTHe roll no is : " << roll_number;
    std::cout << "\nThe studnet name is :" << name;
    std::cout << "\nThe marks is :" << marks;
}

// int Marks::total_marks()
// {
//     int to_marks;
//     to_marks=Physics::get_phyMarks+Mathematics::get_MathMarks+Chemistry::get_CheMarks;
//     return to_marks;
// }
// int total_marks()
// {
//     int tot_marks=
//     return tot_marks;

// }
// double Marks::avg()
// {
//     int mar=total_marks();
//     double average=mar/3;
//     return average;

// }

Physics::Physics()
{
    phy_marks = 0;
}

Physics::Physics(int p_marks)
{
    phy_marks = p_marks;
}

void Physics::display() const
{
    std::cout << "The physisc marks are :" << phy_marks;
}

Chemistry::Chemistry()
{
    che_marks = 0;
}
Chemistry::Chemistry(int c_marks)
{
    che_marks = c_marks;
}

void Chemistry::Display() const
{
    std::cout << "THe chemistry marks is :" << che_marks;
}

Mathematics::Mathematics()
{
    mat_marks = 0;
}
Mathematics::Mathematics(int new_marks)
{
    mat_marks = new_marks;
}

void Mathematics::Display() const
{
    std::cout << "THe math marks is :" << mat_marks;
}
