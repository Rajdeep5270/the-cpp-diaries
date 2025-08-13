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
         << "First Array Input" << endl
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

    int b[row][col];

    cout << endl
         << "Second Array Input" << endl
         << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter b[" << i << "][" << j << "] : ";
            cin >> b[i][j];
        }
        cout << endl;
    }

    // Process of Merging 2 array

    int c[row][col * 2];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            c[i][j] = a[i][j];
        } 
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            c[i][j + col] = b[i][j];
        } 
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col * 2; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    
}