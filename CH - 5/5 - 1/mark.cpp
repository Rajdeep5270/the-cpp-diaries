#include <iostream>
using namespace std;

main() {
    int mark;

    cout << "Enter Your Marks : ";
    cin >> mark;

    if(mark >= 91 && mark <= 100) 
        cout << "Grade is A1";
    else if (mark >= 81 && mark <= 90)
        cout << "Grade is A2";
    else if (mark >= 71 && mark <= 80)
        cout << "Grade is B1";
    else if (mark >= 61 && mark <= 70)
        cout << "Grade is B2";
    else if (mark >= 51 && mark <= 60)
        cout << "Grade is C1";
    else if (mark >= 41 && mark <= 50)
        cout << "Grade is C2";
    else if (mark >= 33 && mark <= 40)
        cout << "Grade is D";
    else if (mark >= 0 && mark <= 32)
        cout << "You Are Failed...........";
    else 
        cout << "Invalid Marks............";
}