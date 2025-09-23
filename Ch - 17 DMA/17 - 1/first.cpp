#include <iostream>
using namespace std;

int main()
{
    int *a = new int();

    cout << "Enter any number : ";
    cin >> *a;

    cout << endl
         << "Address : " << a << endl;
    cout << "Value   : " << *a << endl
         << endl;

    *a = 33;

    cout << "Address : " << a << endl;
    cout << "Value   : " << *a << endl
         << endl;

    delete a;

    a = new int[5]{10, 20, 30, 40, 50};

    cout << "Address : " << a << endl;
    cout << "Value   : " << a[0] << " , " << a[1] << " , " << a[2] << " , " << a[3] << " , " << a[4] << endl
         << endl;

    delete[] a;

    *a = 40;

    cout << "Address : " << a << endl;
    cout << "Value   : " << *a << endl
         << endl;

    delete a;

    // if a is deleted then this is called dangling pointer so we have to push null in a

    a = NULL;
}