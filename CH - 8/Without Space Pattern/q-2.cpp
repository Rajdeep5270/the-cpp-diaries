#include <iostream>
using namespace std;

main() {
    for(int i = 1; i <= 5; i++) {
        for(int j = i; j <= 5; j++) {
            if(j % 2 == 0) {
                char ch = j + 64;
                cout << ch << " ";
            }
            else{
                cout << j << " ";
            }
        }
        cout << endl;
    }
}