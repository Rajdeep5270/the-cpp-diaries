#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str;

    cout << endl
         << "Words Counter Program in a Sentence" << endl
         << endl;

    cout << "Enter Sentence : ";
    getline(cin, str);

    int count = 1;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 32) {
            count++;
        }
    }
    
    cout << endl << "There are " << count << " Words in this sentence." << endl;

    return 0;
}