#include <iostream>
using namespace std;

class Arthmetic
{
public:
    void show()
    {
        cout << endl
             << "Basic Calculator Program" << endl;
    }
};

class Calculator : public Arthmetic
{
public:
    void calculate(double a, double b)
    {
        if (a != 0 && b != 0)
            cout << a << " / " << b << " = " << a / b << endl;
        else
            cout << "Cannot Divisible by 0";
    }

    void calculate(double a, double b, double c)
    {
        cout << a << " - " << b << " - " << c << " = " << a - b - c << endl;
    }

    void calculate(double a, double b, double c, double d)
    {
        cout << a << " * " << b << " * " << c << " * " << d << " = " << a * b * c * d << endl;
    }

    void calculate(double a, double b, double c, double d, double e)
    {
        cout << a << " + " << b << " + " << c << " + " << d << " + " << e << " = " << a + b + c + d + e << endl;
    }
};