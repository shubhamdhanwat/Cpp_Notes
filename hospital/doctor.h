#include<iostream>
#include<string>
#include"hospital.h"

class Doctor: public Hospital{
    int doctor_id;
    std::string doctor_name;
    std::string doctor_speciality;
    std::string registered_hospital_name;
    float doctor_fees;

    public:
    Doctor(){}
    Doctor(int hid, std::string hname, std::string hrating, int id, std::string name, std::string speciality, std::string hos_name, float fees):
    Hospital(hid,hname,hrating),doctor_id(id),doctor_name(name),doctor_speciality(speciality), registered_hospital_name(hos_name), doctor_fees(fees){
        std::cout<<"Doctor Parameterized Constructor Called\n";
    }

    void accept(Hospital arr[],int i){
        int flag=0,flag1=0;
        std::string temp;
        std::cout<<"Enter Doctor ID   : ";
        std::cin>>doctor_id;
        std::cout<<"Enter Doctor Name : ";
        std::cin>>doctor_name;
        std::cout<<"Enter Speciality  : ";
        std::cin>>doctor_speciality;
        std::cout<<"Enter Registered Hospital From Below Choices:\n";
        for(int j=0;j<i;j++){
            std::cout<<arr[j].gethospitalName();
            std::cout<<std::endl;
        }
        while(flag==0){
            std::cout<<"Enter: ";
            std::cin>>temp;
            for(int j=0;j<i;j++){
                if(temp==arr[j].gethospitalName()){
                    registered_hospital_name=temp;
                    flag1=1;
                    flag=1;
                }
            }
            if(flag1==0) std::cout<<"Enter Valid Option!!!\n";
        }
        std::cout<<"Enter Doctor Fees : ";
        std::cin>>doctor_fees;
    }

    friend std::ostream& operator<<(std::ostream &os, const Doctor &d){
        os<<"Doctor ID      : "<<d.doctor_id<<"\n";
        os<<"Doctor Name    : "<<d.doctor_name<<"\n";
        os<<"Speciality     : "<<d.doctor_speciality<<"\n";
        os<<"Hospital       : "<<d.registered_hospital_name<<"\n";
        os<<"Doctor Fees    : "<<d.doctor_fees<<"\n";
        return os;
    }

    float CalculateTax(){
        float tax=0;
        tax=0.2*doctor_fees;
        return tax;
    }

    std::string getdoctorName() const { return doctor_name; }
};