#include <iostream>
#include "Stack.cpp"
#define MAX 100
using namespace std;

int main()
{
    int num;

    cout << "Enter number : ";
    cin >> num;

    Stack<int> stack(MAX);

    stack.decimalToBinary(num);

    stack.display();
}