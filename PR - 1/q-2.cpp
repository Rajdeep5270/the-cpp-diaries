#include <iostream>
using namespace std;

main() {
    int num;
    cout << "Enter any Number : ";
    cin >> num;

    if(num % 2 == 0) {
        if(num % 5 == 0) {
            cout << num << " is Even & Divisible by 5.";
        }
        else{
            cout << num << " is Even & Not Divisible by 5.";
        }
    }
    else{
        if(num % 5 == 0) {
            cout << num << " is Odd & Divisible by 5.";
        }
        else{
            cout << num << " is Odd & Not Divisible by 5.";
        }
    }
    
}