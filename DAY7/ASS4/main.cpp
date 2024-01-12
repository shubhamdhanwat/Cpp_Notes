#include <iostream>
#include <cstring>

class Overflowexception : public std::exception
{
    char arr[60];

public:
    Overflowexception(const char *msg)
    {
        strcpy(arr, msg);
    }

    const char *what()
    {
        return arr;
    }
};
class UnderFlowexception : public std::exception
{
    char arr[60];

public:
    UnderFlowexception(const char *msg)
    {
        strcpy(arr, msg);
    }

    const char *what()
    {
        return arr;
    }
};

#include <iostream>
class MyStack
{
    int *arr;
    int size, top;

public:
    MyStack()
    {
        size = 1;
        top = -1;
        arr = new int[size];
    }
    MyStack(int s)
    {
        size = s;
        top = -1;
        arr = new int[size];
    }
    bool isFull()
    {
        return top == size - 1;
    }
    bool isEmpty()
    {
        return top == -1;
    }
    void push(int ele)
    {
        if (isFull())
            throw Overflowexception("The stack is full");
        else if (!isFull())
            arr[++top] = ele;
        else
            throw "Stack is full";
    }
    int pop()
    {
        if (isEmpty())
            throw UnderFlowexception("The stack is Empty");
        else if (!isEmpty())
            return arr[top--];
        else
            throw "Stack is Empty";
    }
};

int main()
{
    MyStack m1;
    try
    {

        m1.push(10);
    }
    catch (Overflowexception o)
    {
        std::cout << o.what() << std::endl;
    }

    try
    {
        m1.pop();
    }
    catch (UnderFlowexception u)
    {
        std::cout << u.what() << '\n';
    }

    // m1.push(20);
    // m1.push(30);
}
