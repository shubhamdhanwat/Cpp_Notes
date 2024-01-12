#include "Doctor.h"
#include<iostream>

float Doctor::calcualteTax()
{
    float tax=0;
    tax=doctor_fees*0.02;
    return tax;
}

Doctor::Doctor()
{

    std::cout<<"\nThe call to the default doctor constructor ....";
    doctor_id="0";
    doctor_name="Doctor_name";
    doctor_specification="trainee";
    registered_hospital_name="kpit_";
    doctor_fees=0;
}

Doctor::Doctor(std::string d_id, std::string d_nm, std::string d_spec, std::string r_ho_nm, float fees)
:doctor_fees(fees)
{
    std::cout<<"\nThe call to the parameterized doctor constructor ....";
    doctor_id=d_id;
    doctor_name=d_nm;
    doctor_specification=d_spec;
    registered_hospital_name=r_ho_nm;
}

Doctor::~Doctor()
{
    std::cout<<"\nThe call to the  doctor destructor  ....";
}

void Doctor::Display()
{
    
    std::cout<<"\nThe doctor id :"<<doctor_id;
    std::cout<<"\nThe doctor name :"<<doctor_name;
    std::cout<<"\nThe doctor specification :"<<doctor_specification;
    std::cout<<"\nThe doctor resgistred hospital name :"<<registered_hospital_name;
    std::cout<<"\nThe doctor fees :"<<doctor_fees;
    
}

void Doctor::Accept(Hospital arr[],int k)
{
    std::cout<<"\nEnter the  doctor id :";
    std::cin>>doctor_id;
    std::cout<<"\nEnter the doctor name :";
    std::cin>>doctor_name;
    std::cout<<"\nEnter the doctor specification :";
    std::cin>>doctor_specification;
    std::cout<<"\n The dotors resgistred hospital name available are :";
    for(int i=0;i<k;i++)
    {
        std::cout<<arr[i].gethospitalName()<<"\n";

    }
    std::string temp;
    int flag=0;
    while(flag==0)
    {
        std::cout<<"\nEnter the name :";
        std::cin>>temp;
        for(int i=0;i<k;i++)
        {
            if(temp==arr[i].gethospitalName())
            {
                registered_hospital_name=temp;
                flag=1;
             
            }
            else
            {
                std::cout<<"\nEnter the valid choice .";
            
            }
        }
    }

    std::cout<<"\nEnter the doctor fees :";
    std::cin>>doctor_fees;
   // Hospital::Accept();

}

float Doctor::get_tax()
{
   float  a=calcualteTax();
   return a;
}

std::ostream &operator<<(std::ostream & os,  const Doctor & d)
{
    os<<"\nThe doctor id :";
    os<<d.doctor_id;
    os<<"\nThe doctor name :";
    os<<d.doctor_name;
    os<<"\nThe doctor specification :";
    os<<d.doctor_specification;
    os<<"\nThe doctor resgistred hospital name :";
    os<<d.registered_hospital_name;
    os<<"\nThe doctor fees :";
    os<<d.doctor_fees;
    return os;
}
