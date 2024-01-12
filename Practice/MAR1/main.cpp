#include<iostream>
#include<cstring>
#include"header.h"

int main()
{
    int num,e,f;
    std::cout<<"\nEnter the number of account you want to create :";
    std::cin>>num;
    Account *arr=NULL;
    arr=new Account[num];
    char* new_name;
    int i=0;
    do
    {
        std::cout<<"\n MENU";
        std::cout<<"\n 1.INPUT";
        std::cout<<"\n 2.OUTPUT";
        std::cout<<"\n 3.SEARCH";
        std::cout<<"\n 4.MODIFY";
        std::cout<<"\n 5.EXIT";
        int choice;
        std::cout<<"\nEnter the choice :";
        std::cin>>choice;
        switch (choice)
        {
        case 1:
            if(i==num)
            {
                std::cout<<"\nThe stack of the account is full.";
            }
            else
            {
                arr[i].accept();
                i++;
                
            }
            break;
        case 2:
            if(i==0)
            {
                std::cout<<"\n The stack is empty.......";
            }
            else
            {
                for(int j=0;j<i;j++)
                {
                    arr[j].display();
                }
            }
            break;
        case 3:
            std::cout<<"\nThe list of the availabel account numbers is :";
            for(int j=0;j<i;j++)    
            { 
                std::cout<<arr[j].get_Accno()<<", ";
            }
            int search_accno;
            std::cout<<"\nEnter the account number you want to searrch :";
            std::cin>>search_accno;
            e=search(arr,search_accno,num);
            break;

        case 4:
            std::cout<<"\nThe list of the available account numbers is :";
            for(int j=0;j<i;j++)    
            { 
                std::cout<<arr[j].get_Accno()<<", ";
            }  
            f=search(arr,search_accno,num);
            if(e==1)
            {
                do
            {
            int modify_choice;
            std::cout<<"\nEnter the choice which you want to modify .";
            std::cin>>modify_choice;
            std::cout<<"\n MENU";
            std::cout<<"\n 1.MODIFY BALANCE";
            std::cout<<"\n 2.MODIFY NAME";
            std::cout<<"\n 3.EXIT";
            switch (modify_choice)
            {
            case 1:
                std::cout<<"\nEnter the new name :";
                
                break;

            }
               
            } while (1);

            }
            else
            {
                std::cout<<"Enter the valid accno to modify.";
            }
            
            break;
        case 5:
        delete[] arr;
            exit(0);

        default:
            break;
        }
    } while (1);
    
}