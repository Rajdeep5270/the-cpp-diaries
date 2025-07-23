#include <iostream>
using namespace std;

main() {
    for(int i = 2; i <= 6; i++) {
        for(int j = 2; j <= i; j++) {
            cout << i * i << " ";
        }
        cout << endl;
    }
}