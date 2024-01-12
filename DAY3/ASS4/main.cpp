#include <iostream>
#include"header.h"

int main() {
    int size,choice,element,count=0;
    std::cout<<"Enter Stack Size: ";
    std::cin>>size;
    Stack myStack(size);
    while(choice!=4){
        std::cout<<"Main Menu\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter Choice: ";
        std::cin>>choice;
        switch(choice){
            case 1:
                if(count==size){
                    std::cout<<"Stack is Full\n";
                }else{
                    count++;
                    std::cout<<"Enter Element: ";
                    std::cin>>element;
                    myStack.push(element);
                }
                break;
            case 2:
                myStack.pop();
                break;
            case 3:
                myStack.display();
                break;
            case 4:
                break;
            default:
                std::cout<<"Invalid Choice!!"<<std::endl;
                break;
        }
    }
    return 0;
}