#include <iostream>
#include <string.h>
#include "Stack.cpp"
using namespace std;

int main()
{
    char str[20];

    cout << "Enter string : ";
    cin >> str;

    strlwr(str);

    Stack<char> stack(strlen(str));

    if (stack.palindrom(str))
        cout << endl
             << "String is palindrom" << endl;
    else
        cout << endl
             << "String is not palindrom" << endl;
}