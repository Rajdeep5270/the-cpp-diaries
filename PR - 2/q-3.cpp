#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a Number : ";
    cin >> n;

    while (n > 0 || sum >= 10) {
        if (n == 0) {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }

    cout << "Final : " << sum << endl;
    return 0;
}
