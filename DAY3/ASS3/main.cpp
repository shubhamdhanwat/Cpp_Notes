#include <iostream>
#include<cstring>
#include "header.h"

int main()
{
    int num;
    std::cout << "\nEnter the number of data to be inserted :";
    std::cin >> num;
    int i = 0;
    char *new_name;
    Account *arr = new Account[num];
    // int *arr = new int[10]
    do
    {
    A:
        std::cout << "\n   MENU ";
        std::cout << "\n1. INPUT ";
        std::cout << "\n2. OUTPUT ";
        std::cout << "\n3. SEARCH ";
        std::cout << "\n4. MODIFY ";
        std::cout << "\n5. EXIT";
        int choice;
        std::cout << "\nEnter the choice :";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            if (i == num)
            {
                std::cout << "The stack is full";
            }
            else
            {
                arr[i].accept();
                i++;
            }
            break;
        case 2:
            if (i == 0)
            {
                std::cout << "Stack is empty .";
            }
            else
            {
                for (int j = 0; j < i; j++)
                {
                    std::cout << "\nAccount " << j + 1 << ".";
                    arr[j].display();
                }
            }
            break;
        case 3:
            std::cout << "\nThe list of available account numbers is :";
            for (int k = 0; k < i; k++)
            {
                std::cout << arr[k].getAcco() << ", ";
            }
            int acc_no;
            std::cout << "\nEnter the Account number :";
            std::cin >> acc_no;
            bool e;
            e = Search(arr, acc_no, num);
            if (e == 1)
            {
                std::cout << "\nThe Account is found .";
            }
            else
            {
                std::cout << "The account is not found .";
            }
            break;
        case 4:
            std::cout << "\nThe list of available account numbers is :";
            for (int k = 0; k < i; k++)
            {
                std::cout << arr[k].getAcco() << " ";
            }
            std::cout << "\nEnter the account no whose name and account balance you want to modify ";
            int acc_n;
            std::cin >> acc_n;
            bool d;
            d = Search(arr, acc_n, num);
            if (d == 1)
            {
                do
                {
                    std::cout << "\n1. Balance ";
                    std::cout << "\n2. Name ";
                    std::cout << "\n3. EXIT";
                    int modify_choice;
                    std::cout << "\nEnter the choice :";
                    std::cin >> modify_choice;

                    switch (modify_choice)
                    {
                    case 1:
                        std::cout << "Enter the new balance :";
                        double new_bal;
                        std::cin >> new_bal;
                        Modify(arr, acc_n, new_bal, num);
                        break;
                    case 2:
                        std::cout << "Enter the new Accout Name :";
                        new_name = new char[20];
                        std::cin >> new_name;
                        Modify(arr, acc_n, new_name, num);
                        break;
                    case 3:
                        delete new_name;
                        goto A;
                        //   break;
                    }
                } while (1);
            }
            else
            {
                std::cout << "The account is not found .";
            }
            break;
        case 5:
            delete [ ] arr;
            exit(0);
            
            break;
        }

    } while (1);

    
    return 0;
}
