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
class Mystack
{
    int size;
    int top;
    int *arr;

public:
    Mystack()
    {
        size = 2;
        top = -1;
        arr = new int[size];
    }
    Mystack(int s)
    {
        size = s;
        top = -1;
        arr = new int[size];
    }
    void push(int ele)
    {
        if (top == size - 1)
        {
            throw Overflowexception("The stack is full");
        }
        else if (top != size - 1)
            arr[++top] = ele;
    }
    int pop()
    {
        if (top == -1)
        {
            throw UnderFlowexception("The stack is Empty");
        }

        return arr[top--];
    }
    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            std::cout << arr[i] << std::endl;
        }
    }
    ~Mystack()
    {
        delete arr;
    }
};
class CreateObject
{
    Mystack *m;

public:
    CreateObject()
    {
        m = new Mystack;
    }
    CreateObject(int s)
    {
        m = new Mystack(s);
    }
    ~CreateObject()
    {
        delete m;
    }
    Mystack &operator*()
    {
        return *m;
    }
    Mystack *operator->()
    {
        return m;
    }
};
int main()
{
    CreateObject obj;

    try
    {
        obj->push(10);
    }
    catch (Overflowexception o)
    {
        std::cout << o.what() << std::endl;
    }
    try
    {
        obj->push(13);
    }
    catch (Overflowexception o)
    {
        std::cout << o.what() << std::endl;
    }
    try
    {
        obj->push(70);
    }
    catch (Overflowexception o)
    {
        std::cout << o.what() << std::endl;
    }

    try
    {
        obj->pop();
    }
    catch (UnderFlowexception u)
    {
        std::cout << u.what() << '\n';
    }

    try
    {
        (*obj).pop();
    }
    catch (UnderFlowexception u)
    {
        std::cout << u.what() << '\n';
    }

    try
    {
        (*obj).pop();
    }
    catch (UnderFlowexception u)
    {
        std::cout << u.what() << '\n';
    }
    obj->display();
    //(*obj).push(10);

    //(*obj).display();
}