#include <iostream>
#include <string>
#include "functions.cpp"
using namespace std;

int main()
{

    string name;
    int count;

    cout << endl
         << "Palindrom Checker Program" << endl
         << endl;
    cout << "Enter Name Here : ";
    getline(cin, name);

    count = stringCount(name);

    string reversedString;
    for(int i = count - 1; i >= 0; i--) {
        reversedString += name[i];
    }

    if(reversedString == name) 
    {
        cout << "String is a Palindrom.";
    }
    else
    {
        cout << "String is Not a Palindrom";
    }

    return 0;
}