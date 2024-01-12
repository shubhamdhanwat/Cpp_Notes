#ifndef HEADER_H
#define HEADER_H

#include <iostream>

class Stack {
    int *arr;
    int top;
    int max_size;

    public:
    Stack();
    Stack(int);

    bool isEmpty();
    bool isFull();

    void push(int element);
    void pop();
    void display();
    int topElement();

    ~Stack();
};

#endif // HEADER_H
