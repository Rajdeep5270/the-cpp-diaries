#include <iostream>
#include "Reverse.cpp"
using namespace std;

int main()
{
    Reverse r1;
    int size;

    cout << "Enter Number of Elements : ";
    cin >> size;

    r1.setVectorData(size);
    r1.getVectorData();
    r1.getReversedVectorData(size);
}