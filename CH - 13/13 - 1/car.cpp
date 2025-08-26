#include <iostream>
using namespace std;

class Car
{
public:
    int car_id;
    char car_company_name[20];
    char car_color[20];
    char car_model[20];
    int car_release_year;
};

int main()
{
    Car car1;
    Car car2;
    Car car3;
    Car car4;

    cout << "Enter Car ID : ";
    cin >> car1.car_id;
    cout << "Enter Car Company Name : ";
    cin >> car1.car_company_name; 
    cout << "Enter Car Color : ";
    cin >> car1.car_color;
    cout << "Enter Car Model : ";
    cin >> car1.car_model;
    cout << "Enter Car Release Year : ";
    cin >> car1.car_release_year;

    cout << endl << endl;

    cout << "Enter Car ID : ";
    cin >> car2.car_id;
    cout << "Enter Car Company Name : ";
    cin >> car2.car_company_name; 
    cout << "Enter Car Color : ";
    cin >> car2.car_color;
    cout << "Enter Car Model : ";
    cin >> car2.car_model;
    cout << "Enter Car Release Year : ";
    cin >> car2.car_release_year;

    cout << endl << endl;

    cout << "Enter Car ID : ";
    cin >> car3.car_id;
    cout << "Enter Car Company Name : ";
    cin >> car3.car_company_name; 
    cout << "Enter Car Color : ";
    cin >> car3.car_color;
    cout << "Enter Car Model : ";
    cin >> car3.car_model;
    cout << "Enter Car Release Year : ";
    cin >> car3.car_release_year;

    cout << endl << endl;

    cout << "Enter Car ID : ";
    cin >> car4.car_id;
    cout << "Enter Car Company Name : ";
    cin >> car4.car_company_name; 
    cout << "Enter Car Color : ";
    cin >> car4.car_color;
    cout << "Enter Car Model : ";
    cin >> car4.car_model;
    cout << "Enter Car Release Year : ";
    cin >> car4.car_release_year;

    cout << endl << endl;

    cout << "Car ID\t: " << car1.car_id << endl;
    cout << "Car Company Name\t: " << car1.car_company_name << endl;
    cout << "Car Color\t: " << car1.car_color << endl;
    cout << "Car Model\t: " << car1.car_model << endl;
    cout << "Car Release Year\t: " << car1.car_release_year << endl;

    cout << endl << endl;

    cout << "Car ID\t: " << car2.car_id << endl;
    cout << "Car Company Name\t: " << car2.car_company_name << endl;
    cout << "Car Color\t: " << car2.car_color << endl;
    cout << "Car Model\t: " << car2.car_model << endl;
    cout << "Car Release Year\t: " << car2.car_release_year << endl;

    cout << endl << endl;

    cout << "Car ID\t: " << car3.car_id << endl;
    cout << "Car Company Name\t: " << car3.car_company_name << endl;
    cout << "Car Color\t: " << car3.car_color << endl;
    cout << "Car Model\t: " << car3.car_model << endl;
    cout << "Car Release Year\t: " << car3.car_release_year << endl;

    cout << endl << endl;

    cout << "Car ID\t: " << car4.car_id << endl;
    cout << "Car Company Name\t: " << car4.car_company_name << endl;
    cout << "Car Color\t: " << car4.car_color << endl;
    cout << "Car Model\t: " << car4.car_model << endl;
    cout << "Car Release Year\t: " << car4.car_release_year << endl;
}