#include <iostream>
#include <string>
using namespace std;

int main()
{

    string name;

    cout << "Enter Name Here : ";
    getline(cin, name);

    int count = 0, space = 0;
    for (int i = 0; name[i] != 0; i++)
    {
        if (name[i] == 32)
        {
            count--;
            space++;
        }
        count++;
    }

    cout << "The Length of [" << name << "] is : " << count << endl;
    cout << "The Space in [" << name << "] is : " << space << endl;

    return 0;
}