#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter any number : ";
    cin >> n;

    int temp = n;

    int rem = 0, rev = 0;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (temp == rev)
    {
        cout << temp << " & " << rev << " are same. So its a palindrom number";
    }
    else
    {
        cout << temp << " & " << rev << " are not same. So its not a palindrom number";
    }
}