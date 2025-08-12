#include <iostream>
using namespace std;

main()
{

    int size;

    cout << "Enter The Number of Elements : ";
    cin >> size;

    int a[size];

    cout << endl
         << "Input of Elements of Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Elements of a[" << i << "] : ";
        cin >> a[i];
    }

    system("cls");

    cout << endl
         << "CRUD Operaion Program";

    int n;
    int pos, element;

    do
    {
        cout << endl
             << endl
             << "Press 1 for Insert" << endl;
        cout << "Press 2 for Add" << endl;
        cout << "Press 3 for Fetch" << endl;
        cout << "Press 4 for Update" << endl;
        cout << "Press 5 for Delete" << endl;
        cout << "Press 6 for Pop" << endl;
        cout << "Press 7 for Remove Duplicates" << endl;
        cout << "Press 0 for Exit" << endl;
        cout << endl
             << "Enter Your Choice : ";
        cin >> n;

        switch (n)
        {
        case 1:
            system("cls");
            cout << "INSERT" << endl
                 << endl;

            cout << "Enter Index : ";
            cin >> pos;
            cout << "Enter New Element : ";
            cin >> element;

            if (pos < size && pos >= 0)
            {
                for (int i = size - 1; i >= pos; i--)
                {
                    a[i + 1] = a[i];
                }

                a[pos] = element;
                size++;
            }
            else
            {
                cout << "Position Does Not Exist." << endl;
            }

            break;

        case 2:
            system("cls");
            cout << "ADD" << endl
                 << endl;

            cout << "Enter New Element : ";
            cin >> element;

            a[size] = element;
            size++;
            break;

        case 3:
            system("cls");
            cout << "FETCH" << endl
                 << endl;

            for (int i = 0; i < size; i++)
            {
                cout << a[i] << "\t";
            }

            break;

        case 4:
            system("cls");
            cout << "UPDATE" << endl
                 << endl;

            cout << "Enter Index : "; // 2
            cin >> pos;
            cout << "Enter New Element : ";
            cin >> element;

            if(pos < size && pos >= 0) {
                a[pos] = element;
            }
            else{
                cout << "Position Does not Exist.";
            }

            break;

        case 5:
            system("cls");
            cout << "DELETE" << endl
                 << endl;

            cout << "Enter Index to Delete : ";
            cin >> pos;

            if(pos < size && pos >= 0) {
                for (int i = pos; i < size; i++)
                {
                    a[i] = a[i + 1];
                }
                size--;
            }
            else{
                cout << "Position Does Not Exist." << endl;
            }

            break;

        case 6:
            system("cls");
            cout << "POP" << endl
                 << endl;

            size--;
            break;

        case 0:
            system("cls");
            cout << "Program Exited Successfully";
            break;

        default:
            system("cls");
            cout << endl
                 << "Invalid Choice";
        }
    } while (n != 0);
}