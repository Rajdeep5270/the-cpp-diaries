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

    vector<int> v1(row);

    vector<vector<int>> matrix(col, v1);

    cout << endl
         << endl
         << "Input Elements" << endl
         << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter element [" << i << "][" << j << "] : ";
            cin >> matrix[i][j];
        }
        cout << endl;
    }

    cout << endl
         << endl
         << "Output Elements" << endl
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
