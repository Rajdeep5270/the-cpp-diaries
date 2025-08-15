#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;

    cout << "Enter Your Name Here : ";
    getline(cin , name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if(name[i] >= 'A' && name[i] <= 'Z' ) {
            name[i] += 32;
        }
    }
    
    cout << endl << "Name in Lower Case : " << name;

    return 0;
}