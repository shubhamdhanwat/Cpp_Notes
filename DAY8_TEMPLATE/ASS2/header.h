#ifndef HEADER_H
#define HEADER_H
#include<string.h>
#include<iostream>

/*We want to calculate the total marks of each student of a class in 
Physics,Chemistry and Mathematics and the average marks of the class. 
The number of students in the class are entered by the user. Create a 
class named Marks with data members for roll number, name and marks. 
Create three other classes inheriting the Marks class, namely Physics, 
Chemistry and Mathematics, which are used to define marks in individual 
subject of each student. Roll number of each student will be generated 
automatically.
*/



class Marks
{
    int roll_number;
    char  name[20];
    int marks;

    public:
    Marks();
    Marks(int, char *, int );
    void Accept();
    void Display()const;



};
    int total_marks();
    double avg();

class Physics:public Marks
{
    int phy_marks;
    public:
    Physics();
    Physics(int );
    void display()const;

    int phyMarks() const { return phy_marks; }
    void setPhyMarks(int phyMarks) { phy_marks = phyMarks; }



};
class Chemistry:public Marks
{
    int che_marks;
    public:
    Chemistry();
    Chemistry(int);
    void Display()const;

    int cheMarks() const { return che_marks; }
    void setCheMarks(int cheMarks) { che_marks = cheMarks; }




};
class Mathematics:public Marks
{
    int mat_marks;
    public:
    Mathematics();
    Mathematics(int );
    void Display()const;

    int matMarks() const { return mat_marks; }
    void setMatMarks(int matMarks) { mat_marks = matMarks; }


};


#endif // HEADER_H
