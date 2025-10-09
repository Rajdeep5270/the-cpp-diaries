#include <iostream>
#include "Stack.cpp"
using namespace std;

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