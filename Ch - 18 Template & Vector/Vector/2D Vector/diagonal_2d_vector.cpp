#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row, col;

    cout << "Enter row : ";
    cin >> row;
    cout << "Enter column : ";
    cin >> col;

    vector<vector<int>> diagonal(col, vector<int>(row));

    // elements input
    cout << endl
         << endl
         << "Input elements" << endl
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter element [" << i << "][" << j << "] : ";
            cin >> diagonal[i][j];
        }
        cout << endl;
    }

    // elements output
    cout << endl
         << endl
         << "Output elements" << endl
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << diagonal[i][j] << " ";
        }
        cout << endl;
    }

    // diagonal elements
    cout << endl
         << endl
         << "Diagonal elements" << endl
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
                cout << diagonal[i][j] << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    // anti diagonal elements
    cout << endl
         << endl
         << "Anti-diagonal elements" << endl
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i + j == row - 1)
                cout << diagonal[i][j] << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    // cross diagonal elements
    cout << endl
         << endl
         << "Cross-diagonal elements" << endl
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j || i + j == row - 1)
                cout << diagonal[i][j] << "  ";
            else
                cout << "   ";
        }
        cout << endl;
    }

    // boundary elements
    cout << endl
         << endl
         << "Boundary elements" << endl
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || j == 0 || j == row - 1 || i == col - 1)
                cout << diagonal[i][j] << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    // plus elements
    cout << endl
         << endl
         << "Plus elements" << endl
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 1 || j == 1)
                cout << diagonal[i][j] << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}