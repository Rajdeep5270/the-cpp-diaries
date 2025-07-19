#include <iostream>
using namespace std;

main() {
    int first, last;

    cout << "Enter First Year : ";
    cin >> first;

    cout << "Enter Last Year : ";
    cin >> last;

    int i = first;
   while(i <= last) {
    if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
    {
        cout << i << " ";
    }
    i++;
   }
    
}