#include <iostream>
#include <string.h>
using namespace std;

class Hotel
{
private:
    int hotel_id;
    char hotel_name[20];
    static char hotel_type[20];
    int hotel_rating;
    int hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;
    static char hotel_location[20];
    
    public:
    

    // setter
    void setHotelData()
    {
        cout << endl
             << endl;
        cout << "Enter Hotel ID : ";
        cin >> hotel_id;
        fflush(stdin);
        cout << "Enter Hotel Name : ";
        gets(hotel_name);
        cout << "Enter Hotel Rating : ";
        cin >> hotel_rating;
        fflush(stdin);
        // cout << "Enter Hotel Location : ";
        // gets(hotel_location);
        cout << "Enter Hotel Establishment Year : ";
        cin >> hotel_establish_year;
        cout << "Enter Hotel Staff Quantity : ";
        cin >> hotel_staff_quantity;
        cout << "Enter Hotel Room Quantity : ";
        cin >> hotel_room_quantity;
    }

    // setter
    void getHotelData()
    {
        cout << endl
             << endl;
        cout << "Hotel ID : " << hotel_id << endl;
        cout << "Hotel Name : " << hotel_name << endl;
        cout << "Hotel Type : " << hotel_type << endl;
        cout << "Hotel Rating : " << hotel_rating << endl;
        cout << "Hotel Location : " << hotel_location << endl;
        cout << "Hotel Establishment Year : " << hotel_establish_year << endl;
        cout << "Hotel Staff Quantity : " << hotel_staff_quantity << endl;
        cout << "Hotel Room Quantity : " << hotel_room_quantity << endl;
    }
};

char Hotel::hotel_location[20] = "Surat";
char Hotel::hotel_type[20] = "Hotel";