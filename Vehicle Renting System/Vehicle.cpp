#include <iostream>
#include <vector>
using namespace std;

class Vehicle
{
private:
    int vehicleId;
    string vehicleName;
    string vehicleType;
    int rentPerDay;
    int count = 0;

public:
    // add vehicle data
    Vehicle(int id, string name, string type, int rent)
    {
        this->vehicleId = id;
        this->vehicleName = name;
        this->vehicleType = type;
        this->rentPerDay = rent;
    }

    // displaying all vehicles
    void displayVehicle()
    {
        cout << "Vehicle Id\t: " << this->vehicleId << endl;
        cout << "Vehicle Name\t: " << this->vehicleName << endl;
        cout << "Vehicle Type\t: " << this->vehicleType << endl;
        cout << "Vehicle Rent PerDay\t: " << this->rentPerDay << endl;
    }
};