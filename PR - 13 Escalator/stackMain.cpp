#include <iostream>
#include "E:\C++ Language\Ch - 20 Stack\Escalator Stack Methods\Stack.cpp"
using namespace std;

int main()
{
    int num;
    cout << "Enter Number of Stack Elements : ";
    cin >> num;

    Stack stack(num);

    int ch;
    int element;

    do
    {
        cout << endl
             << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Top Element" << endl;
        cout << "4. isEmpty" << endl;
        cout << "5. isFull" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter Your Choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << endl
                 << "Enter Stack Element : ";
            cin >> element;
            stack.push(element);
            break;

        case 2:
            stack.pop();
            break;

        case 3:
            stack.topElement();
            break;

        case 4:
            stack.isEmpty();
            break;

        case 5:
            stack.isFull();
            break;

        case 0:
            cout << endl
                 << "Program Exited Successfully...!" << endl
                 << endl;
            break;

        default:
            cout << endl
                 << "Invalid Choice...!" << endl
                 << endl;
        }
    } while (ch != 0);
}