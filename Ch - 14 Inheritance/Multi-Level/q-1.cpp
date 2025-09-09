#include <iostream>
using namespace std;

class P
{
protected:
    float celcius;

public:
    void getTemperature()
    {
        cout << "Enter Temperature in Celsius : ";
        cin >> this->celcius;
    }
};

class Q : public P
{
protected:
    float fahrenheit;

public:
    void celciusToFahrenheit()
    {
        fahrenheit = (celcius * 1.8) + 32;
        cout << "Celcius to Fahrenheit : " << fahrenheit << " Fahrenheit" << endl;
    };
};

class R : public Q
{
protected:
    float kelvin;

public:
    void fahrenheitToKelvin()
    {
        kelvin = ((fahrenheit - 32) * 0.555555) + 273.15;
        cout << "Fahrenheit to Kelvin : " << kelvin << " Kelvin" << endl;
    };
};