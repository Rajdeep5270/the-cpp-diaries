#include <iostream>
using namespace std;

main() {
    for(int i = 1; i <= 5; i++) {
        for(int j = i; j <= 5; j++) {
            if(i % 2 == 0) {
                char ch = i + 64;
                cout << ch << " ";
            }
            else{
                if(j % 2 == 0) {
                    char ch = j + 64;
                    cout << ch << " ";
                }
                else{
                    cout << j << " ";
                }
            }
        }
        cout << endl;
    }
}