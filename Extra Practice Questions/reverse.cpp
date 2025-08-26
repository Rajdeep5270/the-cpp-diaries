#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter any number : ";
    cin >> n;

    cout << n;
    int rev = 0, rem = 0;
    for(int i = 0; n != 0; i++) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    cout << endl << endl << "After Reversing Number" << endl << endl;
    cout << "Reversed Number : " << rev;
}