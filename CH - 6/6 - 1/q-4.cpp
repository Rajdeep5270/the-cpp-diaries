#include <iostream>
using namespace std;

main() {
    int n;

    cout << "Enter Any Number : ";
    cin >> n;

    int i = n;
    while(i >= 1) {
        if(i % 2 != 0) {
            cout << i << " ";
        }
        i--;
    }
     
}