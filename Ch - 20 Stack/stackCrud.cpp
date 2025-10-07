#include <iostream>
using namespace std;

class Stack
{
private:
    int size;
    int *arr;
    int top;
    int len;

public:
    Stack(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
        this->len = 0;
    }

    ~Stack()
    {
        delete[] arr;
    }

    // to push an element
    void push(int element)
    {
        if (this->top == size - 1)
            cout << endl
                 << "Stack is full...!" << endl;
        else
        {
            top++;
            arr[top] = element;
            len++;
            cout << endl
                 << "Element is pushed...!" << endl;
        }
    }

    // to pop an element
    void pop()
    {
        if (this->top == -1)
            cout << endl
                 << "Stack is empty...!" << endl;
        else
        {
            this->top--;
            this->len--;
            cout << endl
                 << "Element is popped...!" << endl;
        }
    }

    // to peek an element
    void peek()
    {
        if (this->top == -1)
            cout << endl
                 << "Stack is empty...!" << endl;
        else
            cout << endl
                 << "Stack : " << this->arr[this->top] << endl;
    }

    // to check if stack is empty
    void isEmpty()
    {
        if (this->top == -1)
            cout << endl
                 << "Stack is empty...!" << endl;
        else
            cout << endl
                 << "Stack is not empty...!" << endl;
    }

    // to check if stack if full
    void isFull()
    {
        if (this->top == this->size - 1)
            cout << endl
                 << "Stack is full...!" << endl;
        else
            cout << endl
                 << "Stack is not full...!" << endl;
    }

    // to displya the size of stack
    void stackSize()
    {
        cout << endl
             << "Stack size : " << this->len << endl;
    }

    // display all elements of stack
    void display()
    {
        if (this->top == -1)
            cout << endl
                 << "Stack is empty...!" << endl;
        else
        {
            cout << endl
                 << "Stack elements : ";
            for (int i = this->top; i >= 0; i--)
            {
                cout << this->arr[i] << " ";
            }
        }
    }

    // program exiting message
    void exitProgram()
    {
        cout << endl
             << "Exiting Program" << endl;
    }
};

int main()
{
    int size;
    cout << "Enter number of stack elements : ";
    cin >> size;

    Stack stack(size);
    int ch;
    int element;

    do
    {
        cout << endl
             << "1. Push" << endl;
        cout
            << "2. Pop" << endl;
        cout
            << "3. Peek" << endl;
        cout
            << "4. isEmpty" << endl;
        cout
            << "5. isFull" << endl;
        cout
            << "6. Size" << endl;
        cout
            << "7. Display" << endl;
        cout
            << "0. Exit" << endl;
        cout << "Enter your choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter Element to push : ";
            cin >> element;
            stack.push(element);
            break;

        case 2:
            stack.pop();
            break;

        case 3:
            stack.peek();
            break;

        case 4:
            stack.isEmpty();
            break;

        case 5:
            stack.isFull();
            break;

        case 6:
            stack.stackSize();
            break;

        case 7:
            stack.display();
            break;

        case 0:
            stack.exitProgram();
            break;

        default:
            cout << "Invalid choice...!" << endl;
        }
    } while (ch != 0);
}