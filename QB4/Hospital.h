#ifndef HOSPITAL_H
#define HOSPITAL_H
#include <iostream>
#include <string.h>


class Hospital
{  
    std::string hospital_id;
    std::string hospital_name;
    std::string hospital_rating;

public:
    Hospital();
    Hospital(std::string, std::string, std::string);
    Hospital(const Hospital &);
    void Display();
    void Accept();
    ~Hospital();
    std::string gethospitalName() const { return hospital_name; }
    friend std::ostream &operator<<(std::ostream &, const Hospital &);
};

#endif // HOSPITAL_H
