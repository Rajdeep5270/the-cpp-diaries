#include <iostream>
using namespace std;

class Vehicle
{
protected:
    int vehicleId;
    string vehicleBrand;
    string vehicleModal;
    double rentPerDay;
    bool isAvailable;
    int size;

public:
    // adding a vehicle
    virtual void addVehicle()
    {
        cout << endl
             << endl
             << "ADD VEHICLE" << endl
             << endl;
        cout << "Enter Vehicle ID\t: ";
        cin >> this->vehicleId;
        cout << "Enter Vehicle Brand\t: ";
        cin >> this->vehicleBrand;
        cout << "Enter Vehicle Modal\t: ";
        cin >> this->vehicleModal;
        cout << "Enter Rent Per Day\t: ";
        cin >> this->rentPerDay;

        cout << "Press Enter to Continue...";
        cin.ignore();
        cin.get();
    };

    // vehicle information displaying
    void displayAllVehicles()
    {
        cout << endl
             << endl
             << "VEHICLE DETAILS" << endl
             << endl;

        cout << "Vehicle ID\t: " << this->vehicleId << endl;
        cout << "Vehicle Brand\t: " << this->vehicleBrand << endl;
        cout << "Vehicle Modal\t: " << this->vehicleModal << endl;
        cout << "Vehicle Rent Per Day\t: " << this->rentPerDay << endl;
        cout << "Vehicle Avaibility\t: " << (this->isAvailable ? "Yes" || "yes" : "No" || "no") << endl;

        cout << "Press Enter to Continue...";
        cin.ignore();
        cin.get();
    };

    // program exit
    void programExitSuccessfully()
    {
        cout << endl
             << endl
             << "EXIT" << endl
             << endl;
        cout << "Program Exited Successfully..." << endl;

        cout << "Press Enter to Continue...";
        cin.ignore();
        cin.get();
    }

    // invalid choice
    void invalidChoice()
    {
        cout << endl
             << endl
             << "INVALID CHOICE" << endl
             << endl;
        cout << "Press Enter to Continue...";
        cin.ignore();
        cin.get();
    }
};

// bike class
class Bike : public virtual Vehicle
{
private:
    bool helemtIncluded;
    Vehicle v1[100];

public:
    // bike list
    // void bikeLists()
    // {
    //     cout << endl
    //          << endl
    //          << "BIKE CATEGORY" << endl
    //          << endl;
    //     cout << "Bike ID\t: " << v1->vehicleId << endl;
    //     cout
    // };

    // calculating bike Rent
    void calculateRent() {
    };
};

// car class
class Car : public virtual Vehicle
{
private:
    int seatingCapacity;

public:
    // car rent calculation
    void calculateRent() {

    };
};

class Customer : public virtual Vehicle, Bike, Car
{
private:
    int customerId;
    string customerName;
    int rentedVehicleId;
    int daysRented;
    int ch;

public:
    // customer details fill up
    void customerDetails()
    {
        cout << endl
             << endl
             << "ENTER CUSTOMER INFO" << endl
             << endl;

        cout << "Enter Customer ID\t: ";
        cin >> this->customerId;
        cout << "Enter Customer Name\t: ";
        cin >> this->customerName;
        cout << "Enter Vehicle ID\t: ";
        cin >> this->rentedVehicleId;
        cout << "Enter Rent Days\t: ";
        cin >> this->daysRented;
    };

    // customer details shown
    void showCustomerDetails()
    {
        cout << endl
             << endl
             << "CUSTOMER DETAILS" << endl
             << endl;
        cout << "Customer ID\t: " << this->customerId << endl;
        cout << "Customer Name\t: " << this->customerName << endl;
        cout << "Rented Vehicle ID\t: " << this->rentedVehicleId << endl;
        cout << "Days Rented\t: " << this->daysRented << endl;
    }
    // customer choice
    void customerChoice()
    {
        while (ch != 0)
        {
            cout << endl
                 << endl
                 << "Vehicle Renting Company" << endl
                 << endl;
            cout << "1. Add Vehicle" << endl;
            cout << "2. Display All Vehicles" << endl;
            cout << "3. Rent a Vehicle" << endl;
            cout << "4. Return a Vehicle" << endl;
            cout << "5. Show Customer Information" << endl;
            cout << "0. Exit";
            cout << "Enter Your Choice : ";
            cin >> ch;

            switch (ch)
            {
            case 1:
                cout << endl
                     << endl
                     << "ADD VEHICLE" << endl
                     << endl;
                cout << "Enter number of vehicle";
                cin >> size;
                break;
            case 2:
                cout << endl
                     << endl
                     << "CHOOSE VEHICLE TYPE" << endl
                     << endl;
                cout << "1. Bike" << endl;
                cout << "2. Car" << endl;
                cout << "Enter Your Choice : ";
                int bCh;
                cin >> bCh;
                switch (bCh)
                {
                case 1:

                    break;
                }
                break;

            case 3:

                break;

            case 4:

                break;

            case 5:
                showCustomerDetails();
                break;

            case 0:
                programExitSuccessfully();
                break;

            default:
                invalidChoice();
            }
        }
    };
};
