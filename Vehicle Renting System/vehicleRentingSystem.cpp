#include <iostream>
#include <vector>
#include "Vehicle.cpp"
using namespace std;

int main()
{
    int ch;
    int id, rent;
    string name, type;

    vector<Vehicle> v;

    do
    {
        cout << endl
             << endl
             << "Vehicle Renting System" << endl
             << endl;

        cout << "1. Add Vehicle" << endl;
        cout << "2. Rent Vehicle" << endl;
        cout << "3. Return Vehicle" << endl;
        cout << "4. Display all Vehicle" << endl;
        cout << "0. Exit" << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter vehicle id : ";
            cin >> id;
            cout << "Enter vehicle name : ";
            cin >> name;
            cout << "Enter vehicle  type : ";
            cin >> type;
            cout << "Enter vehicle rent : ";
            cin >> rent;
            v.push_back(Vehicle(id, name, type, rent));
            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            cout << endl
                 << endl
                 << "Displaying all Vehicles" << endl
                 << endl;
            for (auto &v : v)
                v.displayVehicle();
            break;

        case 0:
            break;

        default:
            cout << endl
                 << "Invalid Choice" << endl
                 << endl;
        }
    } while (ch != 0);
}