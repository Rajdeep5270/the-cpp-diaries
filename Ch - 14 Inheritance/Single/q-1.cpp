#include <iostream>
using namespace std;

class X
{
protected:
    int a, b, c, sum = 0;
};

class Y : public X
{
    public:
    // setter
    void setCubesValues()
    {
        cout << "Enter First Value : ";
        cin >> a;
        cout << "Enter Second Value : ";
        cin >> b;
        cout << "Enter Third Value : ";
        cin >> c;

        cubesFinder(a, b, c);
    }

    void cubesFinder(int a, int b, int c)
    {
        a = a * a * a;
        b = b * b * b;
        c = c * c * c;

        sum = a + b + c;
        getCubesValues();
    }

    // getter
    void getCubesValues() {
        cout << endl << endl;
        cout << "The Sum of Cubes of " << a << ", " << b << ", " << c << " = " << sum << endl << endl;
    }
};