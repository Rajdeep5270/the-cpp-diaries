#include <iostream>
#include "Hotel.cpp"
using namespace std;

int main()
{
    int size;
    cout << "Enter Number of Hotels : ";
    cin >> size;

    Hotel hotel[size];

    for (int i = 0; i < size; i++)
    {
        hotel[i].setHotelData();
    }

    for (int i = 0; i < size; i++)
    {
        hotel[i].getHotelData();
    }
    
}
