#include <iostream>
#include "Final.cpp"
using namespace std;

int main()
{
    LinkedList list;
    int choice;

    while (true)
    {
        cout << endl
             << endl;
        cout << "1. Insert in Linked List" << endl;
        cout << "2. Display Linked List" << endl;
        cout << "3. Search in Linked List" << endl;
        cout << "4. Delete from Linked List" << endl;
        cout << "5. Merge Sort Array" << endl;
        cout << "6. Quick Sort Array" << endl;
        cout << "7. Binary Search" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int x;
            cout << "Enter value: ";
            cin >> x;
            list.insert(x);
        }
        else if (choice == 2)
        {
            list.display();
        }
        else if (choice == 3)
        {
            int x;
            cout << "Enter value to search: ";
            cin >> x;
            list.search(x);
        }
        else if (choice == 4)
        {
            int x;
            cout << "Enter value to delete: ";
            cin >> x;
            list.deleteValue(x);
        }
        else if (choice == 5 || choice == 6)
        {
            int n;
            cout << "Enter array size: ";
            cin >> n;

            int arr[n];
            for (int i = 0; i < n; i++)
            {
                cout << "Elements array[" << i << "] : ";
                cin >> arr[i];
            }

            if (choice == 5)
            {
                mergeSort(arr, 0, n - 1);
                cout << "After Merge Sort: ";
            }
            else
            {
                quickSort(arr, 0, n - 1);
                cout << "After Quick Sort: ";
            }

            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
        else if (choice == 7)
        {
            int n, x;
            cout << "Enter array size (sorted array): ";
            cin >> n;

            int arr[n];
            for (int i = 0; i < n; i++)
            {
                cout << "Elements array[" << i << "] : ";
                cin >> arr[i];
            }

            cout << "Enter value: ";
            cin >> x;

            int pos = binarySearch(arr, n, x);

            if (pos == -1)
                cout << "Value not found." << endl;
            else
                cout << "Value found at index: " << pos << endl;
        }
        else if (choice == 8)
        {
            cout << "Exiting..." << endl;
            break;
        }
        else
        {
            cout << "Invalid choice." << endl;
        }
    }
}
