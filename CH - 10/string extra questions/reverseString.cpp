#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;

    cout << "Enter Name Here : ";
    getline(cin, name);

    int count = 0;
    for (int i = 0; name[i] != 0; i++)
    {
        count++;
    }

    cout << endl
         << "String in Reverse" << endl
         << endl;
    for (int i = count; i >= 0; i--)
    {
        cout << name[i];
    }

    return 0;
}