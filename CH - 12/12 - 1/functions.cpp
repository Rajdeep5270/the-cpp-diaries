#include <iostream>
using namespace std;

void arrayOutput(int n, int *ptr)
{
    cout << endl
         << endl
         << "Squared Array Output" << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << *(ptr + i) * *(ptr + i) << " ";
    }
}

void arrayInput(int n, int *ptr)
{
    cout << endl
         << endl
         << "Input Elements of Array" << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> *(ptr + i);
    }
    arrayOutput(n, ptr);
}

void swapProgram(int *ptr1, int *ptr2) {
    int c = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = c;
}