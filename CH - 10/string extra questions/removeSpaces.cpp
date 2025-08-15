#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << endl
         << "Remove Space from a sentence program." << endl
         << endl;

    string str;

    cout << "Enter a Sentence : ";
    getline(cin, str);

    cout << endl
         << "Sentence Without Space" << endl
         << endl;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 32)
        {
            str[i]--;
        }
        else
        {
            cout << str[i];
        }
    }

    return 0;
}