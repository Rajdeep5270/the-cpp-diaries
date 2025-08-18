#include <iostream>
#include <string>
using namespace std;

int main()
{

    char password[20];

    cout << "Enter Your Password Here : ";
    cin >> password;

    int cap = 0, spe = 0, digit = 0;
    for (int i = 0; password[i] != '\0'; i++)
    {
        if (password[0] >= 'A' && password[0] <= 'z')
        {
            cap = 1;
        }
        if (password[i] >= '0' && password[i] <= '9')
        {
            digit = 1;
        }
        else if (password[i] >= 32 && password[i] <= 47 || password[i] >= 58 && password[i] <= 64 || password[i] >= 91 && password[i] <= 96 || password[i] >= 123 && password[i] <= 126)
        {
            spe = 1;
        }
    }

    if (cap && spe && digit)
    {
        cout << "Your Password is Strong";
    }
    else
    {
        cout << "Your Password is not Strong";
    }

    return 0;
}