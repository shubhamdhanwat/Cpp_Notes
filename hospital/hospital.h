#include<iostream>
#include<string>
#include<cstring>

class Hospital{
    int hospital_id;
    std::string hospital_name;
    std::string hospital_rating;

    public:
    Hospital(){}
    Hospital(int id, std::string name, std::string rating):
    hospital_id(id),hospital_name(name),hospital_rating(rating){
        std::cout<<"Hospital Parameterized Constructor Called\n";
    }

    void accept(){
        std::string temp;
        int flag=0,choice;
        std::cout<<"Enter Hospital ID    : ";
        std::cin>>hospital_id;
        std::cout<<"Enter Hospital Name  : ";
        std::cin>>hospital_name;
        std::cout<<"Enter Hospital Rating:\n1. Good\n2. Decent\n3. Average\n4. Poor\nEnter Choice: ";
        std::cin>>choice;
        switch(choice){
            case 1:
                hospital_rating="Good";
                break;
            case 2:
                hospital_rating="Decent";
                break;
            case 3:
                hospital_rating="Average";
                break;
            case 4:
                hospital_rating="Poor";
                break;
            default:
                std::cout<<"Enter Valid Choice!!\n";
        }
    }

    std::string gethospitalName() const { return hospital_name; }
    
    friend std::ostream& operator<<(std::ostream &os, const Hospital &h){
        os<<"Hospital ID    : "<<h.hospital_id<<"\n";
        os<<"Hospital Name  : "<<h.hospital_name<<"\n";
        os<<"Hospital Rating: "<<h.hospital_rating<<"\n";
        return os;
    }

    Hospital(Hospital &obj){
        hospital_id=obj.hospital_id;
        hospital_name=obj.hospital_name;
        hospital_rating=obj.hospital_rating;
    }

    std::string gethospitalRating() const { return hospital_rating; }
};