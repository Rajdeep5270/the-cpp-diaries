#include <iostream>
using namespace std;

main()
{
    int row, col;

    cout << "Enter Row Size : ";
    cin >> row;
    cout << "Enter Column Size : ";
    cin >> col;

    int a[row][col];

    cout << endl
         << "Array Input" << endl
         << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                cout << a[i][j] << "  ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}