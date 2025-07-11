#include <iostream>
using namespace std;

main() {
    int num;

    cout << "Enter any Number : ";
    cin >> num;

    if (num >= 1)
        cout << num << " is Positive.";
    else if (num < 0)
        cout << num << " is Negative";
    else 
        cout << num << " is Neutral.";
}