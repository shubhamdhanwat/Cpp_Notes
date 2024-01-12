#ifndef DOCTOR_H
#define DOCTOR_H

#include<iostream>
#include"Hospital.h"
#include<string.h>

class Doctor:public Hospital
{

    std::string doctor_id;
    std::string doctor_name;
    std::string doctor_specification;
    std::string registered_hospital_name;
    float doctor_fees;
    float calcualteTax();
    public:
    Doctor();
    Doctor(std::string,std::string,std::string,std::string,float);
    ~Doctor();
    void Display();
    void Accept(Hospital h[] , int);
    friend std::ostream &operator<<(std::ostream &, const Doctor &);
    float get_tax();
    float doctorFees() const { return doctor_fees; }
   
};

#endif // DOCTOR_H
