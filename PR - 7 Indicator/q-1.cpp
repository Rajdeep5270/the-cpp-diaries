#include <iostream>
using namespace std;

int main()
{
    // character length finder using pointer program 
    char name[20];

    cout << "Enter Name : ";
    cin >> name;

    char *ptr = name;

    int count = 0;
    for (int i = 0; ptr[i] != '\0'; i++)
    {
        count++;
    }

    cout << count;
    
}