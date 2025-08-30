#include <iostream>
#include <string.h>
using namespace std;

class Car
{
private:
    int id;
    char name[20];
    char color[20];
    double price;

public:
    // setter
    void setCarData()
    {
        cout << endl << endl;
        cout << "Enter Car ID : ";
        cin >> id;
        fflush(stdin);
        cout << "Enter Car Name : ";
        gets(name);
        cout << "Enter Car Color : ";
        gets(color);
        cout << "Enter Car Price : ";
        cin >> price;
        cout << endl;
    };

    // getter
    void getCarData()
    {
        cout << endl;
        cout << "Car ID\t\t: " << id << endl;
        cout << "Car Name\t: " << name << endl;
        cout << "Car Color\t: " << color << endl;
        cout << "Car Price\t: " << price << endl;
        cout << endl;
    };

    // sum of price of all cars
    void sumCarPrice(int size, Car car[])
    {
        int sumPrice = 0;
        for (int i = 0; i < size; i++)
        {
            sumPrice += car[i].price;
        }
        cout << "The Total Price of Car is " << sumPrice;
    };
};
