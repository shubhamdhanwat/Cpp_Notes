#include <iostream>
#include <cstring>
using namespace std;
class Car
{ // attributes ,data members
    char name[20];
    long long int price;
    char fuel_type[10];
    int seats;

    // member functions
public:
    Car()
    {
        cout << "\nDefault consturctor is called";
        strcpy(name, "nexon");
        price = 1200000;
        strcpy(fuel_type, "Petrol");
        seats = 5;
    }
    Car(const char *nm, long long int pr, const char *ft, int seat) : price(pr), seats(seat)
    {
        cout << "\nParametrized constructor is called .";
        strcpy(name, nm);
        strcpy(fuel_type, ft);
    }
    void accept()
    {
        cout << "Enter the car name ";
        cin >> name;
        cout << "Enter the price  ";
        cin >> price;
        cout << "Enter the fuel type ";
        cin >> fuel_type;
        cout << "Enter the seats ";
        cin >> seats;
    }

    void display()const
    {
        cout << "\nThe name of the car is:" << name;
        cout << "\nThe price of the car is :" << price;
        cout << "\nThe fuel type of the car is " << fuel_type;
        cout << "\nThe seats in the car is  " << seats;
    }
};
int main()
{
    Car s1;
    // s1.accept();
    s1.display();
    Car s2;
    //s2.accept();
    s2.display();
    Car S3 = {"safari", 1600000, "disele", 7};
    S3.display();

    return 0;
}