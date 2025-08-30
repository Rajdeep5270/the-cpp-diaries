#include <iostream>
#include "E:\C++ Language\CH - 13\Car.cpp"
using namespace std;

int main()
{

    int size;
    cout << "Enter No of Cars : ";
    cin >> size;
    Car cars[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Car Data NO : " << i + 1;
        cars[i].setCarData();
    };

    for (int i = 0; i < size; i++)
        cars[i].getCarData();

    cars[0].sumCarPrice(size, cars);
}