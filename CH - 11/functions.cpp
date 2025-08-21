#include <iostream>
using namespace std;

void cubeOutput(int n)
{
    cout << "Cube of " << n << " is : " << n * n * n << endl;
}

void numberChecker(int n)
{
    if (n % 3 == 0 && n % 5 == 0)
        cout << "Number is Divisible by 3 and 5 Both.";
    else
        cout << "Number is Not Divisible by 3 and 5 Both.";
}

void sumOfArray(int size, int a[])
{
    int sum = 0;
    // sum of array
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }

    cout << endl
         << "The Sum : " << sum << endl;
}

void inputOfElementsOfArray(int size)
{
    int a[size];
    cout << endl
         << endl
         << "Input of Array Elements" << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }

    sumOfArray(size, a);
}

void numberOfElements()
{
    int size;
    cout << "Enter Number of Elements : ";
    cin >> size;

    inputOfElementsOfArray(size);
}

void stringLengthFinder(char name[]) {
    int count = 0;
    for (int i = 0; name[i] != 0; i++)
    {
        count++;
    }
    
    cout << endl << "The Length of " << name << " is : " << count << " Characters." << endl << endl;
}

void stringInput()
{
    char name[20];

    cout << "Enter Name : ";
    cin >> name;

    stringLengthFinder(name);
}