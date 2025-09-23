#include <iostream>
#include "Methods.h"
using namespace std;

int main()
{
    Methods v1;
    int ch;

    int size, index, element;

    // v1.setElements(size);
    // v1.getElements();

    do
    {
        cout << "1. Add Elements" << endl;
        cout << "2. Display Elements" << endl;
        cout << "3. Update Element" << endl;
        cout << "4. Delete Element" << endl;
        cout << "0. Exit" << endl
             << endl;
        cout << "Enter your choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter Number of Elements : ";
            cin >> size;
            v1.setElements(size);
            break;

        case 2:
            v1.getElements();
            cout << endl
                 << endl;
            break;

        case 3:
            cout << "Enter Index : ";
            cin >> index;
            cout << "Enter Element : ";
            cin >> element;
            if (index >= 0 && index < size)
                v1.updateElement(index, element);
            else
                cout << endl
                     << "Data not found...!" << endl;
            break;

        case 4:
            cout << "Enter Index : ";
            cin >> index;
            if (index >= 0 && index < size)
                v1.deleteElement(index);
            else
                cout << endl
                     << "Data not found...!" << endl;
            break;

        case 0:
            v1.exit();
            break;

        default:
            cout << endl
                 << "Invalid Choice" << endl;
        }
    } while (ch != 0);
    return 0;
}