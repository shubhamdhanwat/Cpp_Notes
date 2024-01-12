#include <iostream>
// #include"Hospital.h"
#include "Doctor.h"
int main()
{
    // Hospital h1;
    // h1.Display();
    // h1.Accept();
    // h1.Display();
    // Hospital h2("12FD","LOTUS","GOOD");
    // h2.Display();

    //     Hospital h3(h1);
    //    // h3.Display();
    //     std::cout<<h3;
    // Doctor d1;
    // d1.Accept();
    // d1.Display();
    // std::cout<<"\nThe tax is "<<d1.get_tax();
    int num;
    std::cout << "\nEnter the no of hospital details to be added :";
    std::cin >> num;
    Hospital *hospital_Arr = new Hospital[num];

    int num2;
    std::cout << "\nEnter the number of doctors to be intered :";
    std::cin >> num2;
    Doctor *Doc = new Doctor[num2];
    int choice, i = 0,j=0 ;

    while (1)
    {
        std::cout << "\n1.Accept Hostital \n2.Display Hospital \n3.Accept Doctors \n4.Display Doctors \n5.Tax of Doc with High Fees \n";
        std::cout << "Enter the choice:";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            if (i < num)
            {
                hospital_Arr[i].Accept();
                i++;
                
            }
            else
            {
                std::cout << "\nThe stack is full ..";
            }
            break;
        case 2:
            std::cout << i;
            if (i == 0)
            {
                std::cout << "\nThe  stack is empty ..";
            }
            else
            {
                for (int k = 0; k < i; k++)
                {
                    hospital_Arr[k].Display();
                }
            }
            break;
        case 3:
            Doc[j].Accept(hospital_Arr, i);
            j++;
            break;
        case 4:
            for (int i = 0; i < j; i++)
            {
                Doc[i].Display();
            }
            break;
        case 5:
            break;
        }

        
    }
    return 0;
}