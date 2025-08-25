#include <iostream>
#include "functions.cpp"
using namespace std;

int main()
{
    int n;

    cout << "Enter Size : ";
    cin >> n;

    int a[n];

    arrayInput(n, &a[0]);
}