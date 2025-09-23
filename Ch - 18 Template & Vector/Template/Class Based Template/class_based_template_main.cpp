#include <iostream>
#include "ClassTemplate.h"
using namespace std;

int main()
{
    int a;
    double b;
    cout << "Enter First Value in Integer : ";
    cin >> a;
    cout << "Enter Second Value in Float : ";
    cin >> b;
    ClassTemplate<int, double> classtemplate(a, b);

    classtemplate.getData();
}