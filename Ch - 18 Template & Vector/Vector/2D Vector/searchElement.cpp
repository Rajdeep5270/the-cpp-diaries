#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row, col;

    cout << "Enter Row : ";
    cin >> row;
    cout << "Enter Column : ";
    cin >> col;

    // vector<int> r(row);

    vector<vector<int>> matrix(row, vector<int>(col));

    cout << endl
         << endl
         << "Input elements" << endl
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter elements of matrix[" << i << "][" << j << "] : ";
            cin >> matrix[i][j];
        }
        cout << endl;
    }

    int find;
    cout << "Enter Element to find : ";
    cin >> find;

    cout << endl
         << "Element position" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == find)
            {
                cout << "Found at position [" << i << "][" << j << "] : " << matrix[i][j];
            }
        }
        cout << endl;
    }
}