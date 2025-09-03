#include <iostream>
#include "Cafe.cpp"
using namespace std;

int main() {
    int size;

    cout << "Enter Number of Cafe : ";
    cin >> size;

    Cafe cafe[size];

    for (int i = 0; i < size; i++)
    {
        cafe[i].setCafeData();
    }
}