#include <iostream>
#include "Queue.cpp"
using namespace std;

int main()
{
    int size;

    cout << "Enter number of elements : ";
    cin >> size;

    MyQueue<int> queue(size);

    int ch;
    int element;

    do
    {
        cout << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Front" << endl;
        cout << "4. Rear" << endl;
        cout << "5. Display" << endl;
        cout << "6. isEmpty" << endl;
        cout << "7. isFull" << endl;
        cout << "8. Size" << endl;
        cout << "Enter your choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter element : ";
            cin >> element;
            queue.enqueue(element);
            break;

        case 2:
            queue.dequeue();
            break;

        case 3:
            queue.get_front();
            break;

        case 4:
            queue.get_rear();
            break;

        case 5:
            queue.display();
            break;

        case 6:
            queue.isEmpty();
            break;

        case 7:
            queue.isFull();
            break;

        case 8:
            cout << endl
                 << "Size of elements : " << queue.size() << endl;
            break;

        case 0:
            cout << endl
                 << "Program Exited Successfully...!" << endl;
            break;
        default:
            cout << endl
                 << "Invalid Choice...!" << endl;
        }
    } while (ch != 0);
}