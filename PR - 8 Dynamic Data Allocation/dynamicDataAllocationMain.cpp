#include <iostream>
#include "DDA.cpp"
using namespace std;

int main()
{
    DDA d1;
    int ch;
    int data;

    do
    {
        system("cls");
        cout << endl
             << "1. Insert From Starting" << endl;
        cout << "2. Insert From Ending" << endl;
        cout << "3. Search Element" << endl;
        cout << "4. Delete Element" << endl;
        cout << "5. Reverse all Elements" << endl;
        cout << "6. Display all Nodes" << endl;
        cout << "7. Number of Elements" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter Your Choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            system("cls");
            cout << endl
                 << endl
                 << "ADD ELEMENT AT STARTING" << endl
                 << endl;
            cout << "Enter Element : ";
            cin >> data;
            d1.insertFromBeginning(data);
            d1.ignore();
            break;

        case 2:
            system("cls");
            cout << endl
                 << endl
                 << "ADD ELEMENT AT ENDING" << endl
                 << endl;
            cout << "Enter Element : ";
            cin >> data;
            d1.append(data);
            d1.ignore();
            break;

        case 3:
            system("cls");
            cout << endl
                 << endl
                 << "SEARCH ELEMENT" << endl
                 << endl;
            cout << "Enter Element to Search : ";
            cin >> data;
            d1.searchElement(data);
            d1.ignore();
            break;

        case 4:
            system("cls");
            cout << endl
                 << endl
                 << "DELETE ELEMENT" << endl
                 << endl;
            cout << "Enter Element to Delete : ";
            cin >> data;
            d1.deleteElementByValue(data);
            d1.ignore();
            break;

        case 5:
            system("cls");
            cout << endl
                 << endl
                 << "REVERSE ELEMENT" << endl
                 << endl;
            d1.reverseLinkedList();
            d1.ignore();
            break;

        case 6:
            system("cls");
            cout << endl
                 << endl
                 << "DISPLAY ELEMENTS" << endl
                 << endl;
            d1.displayNodes();
            d1.ignore();
            break;

        case 7:
            system("cls");
            cout << endl
                 << endl
                 << "NUMBER OF ELEMENTS" << endl
                 << endl;
            d1.numberOfElements();
            d1.ignore();
            break;

        case 0:
            system("cls");
            cout << endl
                 << endl
                 << "EXIT" << endl
                 << endl;
            d1.successfullyExit();
            d1.ignore();
            break;

        default:
            system("cls");
            cout << endl
                 << endl
                 << "ERROR" << endl
                 << endl;
            d1.invalidChoice();
            d1.ignore();
        }
    } while (ch != 0);
}