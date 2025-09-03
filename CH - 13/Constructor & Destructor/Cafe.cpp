#include <iostream>
using namespace std;

class Cafe
{
private:
    int cafe_id;
    char cafe_name[20];
    char cafe_type[20];
    int cafe_rating;
    static char cafe_location[20];
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    Cafe() {
        cout << endl << endl;
        cout << "Enter Cafe ID : ";
        cin >> cafe_id;
        fflush(stdin);
        cout << "Enter Cafe Name : ";
        gets(cafe_name);
        cout << "Enter Cafe Type : ";
        gets(cafe_type);
        cout << "Enter Cafe Rating : ";
        cin >> cafe_rating;
        // static data 
        // fflush(stdin);
        // cout << "Enter Cafe Location : ";
        // gets(cafe_location);
        cout << "Enter Cafe Establishment Year : ";
        cin >> cafe_establish_year;
        cout << "Enter Cafe Staff Quantity : ";
        cin >> cafe_staff_quantity;
    };

    // setter 
    void setCafeData() {
        cout << endl;
        cout << "Cafe ID : " << cafe_id << endl;
        cout << "Cafe Name : " << cafe_name << endl;
        cout << "Cafe Type : " << cafe_type << endl;
        cout << "Cafe Rating : " << cafe_rating << endl;
        cout << "Cafe Location : " << cafe_location << endl;
        cout << "Cafe Establishment Year : " << cafe_establish_year << endl;
        cout << "Cafe Staff Quantity : " << cafe_staff_quantity << endl;
        cout << "-------------------------------------------------------------";
    };

};

char Cafe::cafe_location[20] = "Surat";