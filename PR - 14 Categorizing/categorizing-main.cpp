#include <iostream>
#include "Categorizing.cpp"
using namespace std;

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    Categorizing obj(n);
    obj.input();

    int choice;

    do
    {
        cout << endl
             << "========= MENU =========" << endl;
        cout << "1. Selection Sort Ascending" << endl;
        cout << "2. Selection Sort Descending" << endl;
        cout << "3. Merge Sort Ascending" << endl;
        cout << "4. Merge Sort Descending" << endl;
        cout << "5. Linear Search" << endl;
        cout << "6. Binary Search" << endl;
        cout << "7. Display Array" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            obj.selectionSortAsc();
            break;
        case 2:
            obj.selectionSortDesc();
            break;
        case 3:
            obj.mergeSortAsc(0, n - 1);
            cout << "Merge Sort Ascending Completed." << endl;
            break;
        case 4:
            obj.mergeSortDesc(0, n - 1);
            cout << "Merge Sort Descending Completed." << endl;
            break;
        case 5:
            obj.linearSearch();
            break;
        case 6:
            obj.binarySearch();
            break;
        case 7:
            obj.display();
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 0);
}