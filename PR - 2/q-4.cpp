#include <iostream>
using namespace std;

main() {
    char a, b;

    cout << "Enter First Character : ";
    cin >> a;

    cout << "Enter Second Character : ";
    cin >> b;

    char i = a;

    do{
        cout << i << " ";
        i++;
    }while(i <= b);
}