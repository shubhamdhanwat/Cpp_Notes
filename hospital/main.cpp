#include<iostream>
#include"doctor.h"

void search(Doctor a[],std::string name,int num){
    int flag=0;
    for(int i=0;i<num;i++){
        if(a[i].getdoctorName()==name){
            std::cout<<a[i];
            flag=1;
        }
    }
    if(flag==0) std::cout<<"Doctor Not Found"<<std::endl;
}

void search_rating(Hospital a[],std::string rating,int num){
    int flag=0;
    for(int i=0;i<num;i++){
        if(a[i].gethospitalRating()==rating){
            std::cout<<a[i];
            flag=1;
        }
    }
    if(flag==0) std::cout<<"Hospital Not Found"<<std::endl;
}

int main(){
    int hnum,dnum,choice,i=0,z=0;
    std::string dname;
    std::string hrating;
    float max_tax=0;
    std::cout<<"Enter Number of Hospitals: ";
    std::cin>>hnum;
    std::cout<<"Enter Number of Doctors  : ";
    std::cin>>dnum;
    Hospital *hospital_arr = new Hospital[hnum];
    Doctor *doctor_arr = new Doctor[dnum];
    while(1){
        std::cout<<"=====================\nMain Menu:\n1. Add Hospital\n2. Display Hospitals\n3. Add Doctor\n4. Display Doctors\n5. Tax of Doc with High Fees\n6. Search Doctor with Name\n7. Search Hospital with Rating\n8. Exit\n=====================\nEnter Your Choice: ";
        std::cin>>choice;
        switch(choice){
            case 1:
                if(i<hnum){
                    hospital_arr[i].accept();
                    i++;
                }else std::cout<<"Stack is Full\n";
                break;
            case 2:
                if(i!=0){
                    for(int j=0;j<i;j++){
                        std::cout<<hospital_arr[j];
                    }
                }else std::cout<<"Stack is Empty\n";
                break;
            case 3:
                if(z<dnum){
                    doctor_arr[z].accept(hospital_arr,i);
                    z++;
                }else std::cout<<"Stack is Full\n";
                break;
            case 4:
                if(z!=0){
                    for(int k=0;k<z;k++){
                        std::cout<<doctor_arr[k];
                    }
                }else std::cout<<"Stack is Empty\n";
                break;
            case 5:
                for(int j=0;j<z;j++){
                    if(max_tax<doctor_arr[j].CalculateTax()){
                        max_tax=doctor_arr[j].CalculateTax();
                    }
                }
                std::cout<<"Tax: "<<max_tax<<std::endl;
                break;
            case 6:
                
                std::cout<<"Enter Doctor Name to Search: ";
                std::cin>>dname;
                search(doctor_arr,dname,z);
                break;
            case 7:
                std::cout<<"Enter Rating to Search: ";
                std::cin>>hrating;
                search_rating(hospital_arr,hrating,i);
                break;
            case 8:
                delete[] hospital_arr;
                delete[] doctor_arr;
                exit(0);
            default:
                std::cout<<"Enter Valid Option!!"<<std::endl;
        }
    }
    return 0;
}