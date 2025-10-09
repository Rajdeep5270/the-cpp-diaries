#include <iostream>
using namespace std;

template <typename T>
class Stack
{
private:
    T *arr;
    int top;
    int size;
    int count;

public:
    Stack(int size)
    {
        this->size = size;
        this->arr = new T[this->size];
        this->count = 0;
        this->top = -1;
    }

    ~Stack()
    {
        delete[] arr;
    }

    template <typename T1>
    void push(T1 element)
    {
        if (this->top == this->size - 1)
        {
            cout << endl
                 << "Stack is Full...!" << endl;
        }
        else
        {
            this->top++;
            this->arr[this->top] = element;
            this->count++;
        }
    }

    void pop()
    {
        if (top == -1 && count == 0)
        {
            cout << endl
                 << "Stack is empty...!" << endl;
        }
        else
        {
            this->top--;
            this->count--;
        }
    }

    void peek()
    {
        if (this->top == -1 && this->count == 0)
        {
            cout << endl
                 << "Stack is empty...!" << endl;
        }
        else
        {
            cout << endl
                 << "Element is : " << this->arr[this->top];
        }
    }

    void isEmpty()
    {
        if (this->top == -1 && this->count == 0)
        {
            cout << endl
                 << "Stack is empty...!" << endl;
        }
        else
        {
            cout << endl
                 << "Stack is not empty...!" << endl;
        }
    }

    void isFull()
    {
        if (this->top == this->size - 1)
        {
            cout << endl
                 << "Stack is full...!" << endl;
        }
        else
        {
            cout << endl
                 << "Stack is not full...!" << endl;
        }
    }

    void stackSize()
    {
        if (this->top == -1)
        {
            cout << endl
                 << "Stack is empty...!" << endl;
        }
        else
        {
            cout << endl
                 << "Stack size : " << this->count << endl;
        }
    }

    void display()
    {
        if (this->top == -1 && this->count == 0)
        {
            cout << endl
                 << "Stack is empty...!" << endl;
        }
        else
        {
            for (int i = this->top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
        }
    }

    void exitProgram()
    {
        cout << endl
             << "Program exited successfully...!" << endl;
    }

    void decimalToBinary(int num)
    {
        while (num != 0)
        {
            this->push(num % 2);
            num /= 2;
            count++;
        }
    }

    bool palindrom(char str[])
    {
        for (int i = 0; i < size; i++)
        {
            this->push(str[i]);
        }

        for (int i = 0; i < count; i++)
        {
            if (arr[top--] != str[i])
            {
                return false;
            }
        }
        return true;
    }
};