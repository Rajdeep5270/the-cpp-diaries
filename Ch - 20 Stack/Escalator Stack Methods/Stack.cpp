#include <iostream>
using namespace std;

// abstract class
class StackMethods
{
public:
    virtual void push(int element) = 0;
    virtual void pop() = 0;
    virtual void topElement() = 0;
    virtual void isEmpty() = 0;
    virtual void isFull() = 0;
};

class Stack : public StackMethods
{
private:
    int *arr;
    int top;
    int count;
    int size;

public:
    // initialization of datamembers
    Stack(int num)
    {
        this->size = num;
        this->arr = new int(this->size);
        this->count = 0;
        this->top = -1;
    }

    // deallocation of array
    ~Stack()
    {
        delete[] arr;
    }

    // to add element
    void push(int element)
    {
        if (this->top == this->size - 1)
            cout << endl
                 << "Stack is Full...!" << endl
                 << endl;
        else
        {
            this->top++;
            this->arr[this->top] = element;
            this->count++;
        }
    }

    // to remove element
    void pop()
    {
        if (this->top == -1)
            cout << endl
                 << "Stack is Empty...!" << endl
                 << endl;
        else
        {
            this->top--;
            this->count--;
        }
    }

    // to display top element
    void topElement()
    {
        if (this->top == -1)
            cout << endl
                 << "Stack is Empty...!" << endl
                 << endl;
        else
            cout << endl
                 << "Top Element : " << this->arr[this->top] << endl
                 << endl;
    }

    // to check if stack is empty
    void isEmpty()
    {
        if (this->top == -1)

            cout << endl
                 << "Stack is Empty...!" << endl
                 << endl;
        else
            cout << endl
                 << "Stack is not Empty...!" << endl
                 << endl;
    }

    // to check if stack is full
    void isFull()
    {
        if (this->top == this->size - 1)
            cout << endl
                 << "Stack is Full...!" << endl
                 << endl;
        else
            cout << endl
                 << "Stack is not Full...!" << endl
                 << endl;
    }
};