#include <iostream>
#include"header.h"


Stack::Stack()
{
    arr=nullptr;
    top=-1;
    max_size=0;
}

Stack::Stack(int size){
    std::cout<<"Memory Allocated\n";
    top = -1;
    max_size=size;
    arr=new int[max_size];
}

Stack::~Stack(){
    std::cout<<"Memory Cleared\n";
    delete arr;
}

bool Stack::isEmpty(){
    return (top==-1);
}

bool Stack::isFull(){
    return (top==max_size-1);
}

void Stack::push(int element){
    if(!isFull()){
        top++;
        arr[top] = element;
        std::cout<<"Pushed element: "<< element<< " onto the stack.\n";
    }else{
        std::cout<<"Stack is full. Cannot push element "<<element<<".\n";
    }
}

void Stack::pop(){
    if(!isEmpty()){
        int poppedElement = arr[top];
        top--;
        std::cout<<"Popped element: "<<poppedElement<<" from the stack.\n";
    }else{
        std::cout<<"Stack is empty. Cannot pop from an empty stack.\n";
    }
}

void Stack::display()
{
    if(!isEmpty()){
        for(int i=0;i<=top;i++){
            std::cout<<arr[i]<<" ";
        }
        std::cout<<"\n";
    }else{
        std::cout<<"Stack is Empty!!\n";
    }
}

int Stack::topElement(){
    if(!isEmpty()){
        return arr[top];
    }else{
        std::cout << "Stack is empty.\n";
        return -1;
    }
}
