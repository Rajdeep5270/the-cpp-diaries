#include <iostream>
using namespace std;

main() {
    for(int i = 10; i >= 6; i--) {
        for(int j = i; j >= 6; j--) {
            (i % 2 == 0) 
                        ? cout << j * 10 << " "
                        : cout << j << " ";
        }
        cout << endl;
    }
}