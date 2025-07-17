#include <iostream>
using namespace std;

main() {
    int n, rem, count = 0, sum = 0;

    cout << "Enter a Number: ";
    cin >> n;

    int temp = n;

    while(n != 0) {
        count++;
        n = n / 10;
    }

    n = temp;

    for(int i = count; i >= 1; i--) {
        rem = n % 10;
        int power = 1;
        for(int j = 1; j <= i; j++) {
            power *= rem;
        }
        sum += power;
        n = n / 10;
    }

    if (temp != sum)
    {
        cout << "Its not a Disarium Number." << endl;
    }
    else {
        cout << "Its a Disarium Number." << endl;
    }
    
}