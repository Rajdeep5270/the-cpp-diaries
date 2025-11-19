#include <iostream>
#include "Categorizing.cpp"
using namespace std;

int main()
{
    int ch;
    do
    {
        cout << "1. Sorting" << endl;
        cout << "2. Searching" << endl;
        cout << "Enter your choice : ";
        cin >> ch;
        switch (ch)
        {
            int num;
            int subch;
        case 1:
            cout << endl
                 << endl
                 << "SORTING" << endl
                 << endl;
            cout << "1. Selection sort" << endl;
            cout << "2. Merge sort" << endl;
            cout << "Enter your choice : ";
            cin >> subch;
            switch (subch)
            {
            case 1:
            {
                cout << endl
                     << endl
                     << "SELECTION SORT" << endl
                     << endl;
                cout << "Enter number of elements : ";
                cin >> num;
                Categorizing obj(num);
                obj.getElements();
                obj.setElements();
            }
            break;

            case 2:
                cout << endl
                     << endl
                     << "MERGE SORT" << endl
                     << endl;
                break;

            default:
                cout << endl
                     << endl
                     << "Invalid Choice" << endl
                     << endl;
            }
            break;
        case 2:
            cout << endl
                 << endl
                 << "SEARCHING" << endl
                 << endl;
            cout << "1. Binary search" << endl;
            cout << "2. Linear search" << endl;
            cout << "Enter your choice : ";
            cin >> subch;
            switch (subch)
            {
            case 1:
                cout << endl
                     << endl
                     << "BINARY SEARCH" << endl
                     << endl;
                break;

            case 2:
                cout << endl
                     << endl
                     << "LINEAR SEARCH" << endl
                     << endl;
                break;
            default:
                cout << endl
                     << endl
                     << "Invalid Choice" << endl
                     << endl;
            }
            break;
        default:
            cout << endl
                 << endl
                 << "Invalid Choice" << endl
                 << endl;
        }
    } while (ch != 0);
}