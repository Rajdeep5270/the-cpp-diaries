#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter Number of Rooms : ";
    cin >> size;

    int open = 0;
    for (int i = 1; i * i <= size; i++) {
        open++;
    }
    int close = size - open;

    cout << endl << "Open Doors are : " << open << endl << "Close Doors are : " << close << endl;
    return 0;
}