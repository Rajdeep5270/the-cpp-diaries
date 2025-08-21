#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char name[20];

    // input of string
    cout << "Enter Name : ";
    cin >> name;

    int len = strlen(name);

    for (int i = 0; i < len; i++)
    {
        int fre = 0, mark = 1;
        for(int j = 0; j < i; j++) {
            if(name[i] == name[j])
                mark++;
        }

        for(int j = 0; j < len; j++) {
            if(name[i] == name[j])
                fre++;
        }

        if(mark <= 1)
            cout << name[i] << " = " << fre << endl;
    }
}