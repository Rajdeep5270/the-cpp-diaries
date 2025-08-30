#include <iostream>
using namespace std;

class Customer
{
private:
    int cust_id;
    char cust_name[20];
    int cust_age;
    char cust_city[20];
    long long int cust_mobile_number;
    int cust_simcard_validity;
    char cust_telecom_brand_name[20];

public:
    // setter
    void setCustomerData()
    {
        cout << endl
             << endl;
        cout << "Enter Customer ID : ";
        cin >> cust_id;
        fflush(stdin);
        cout << "Enter Customer Name : ";
        gets(cust_name);
        cout << "Enter Customer Age : ";
        cin >> cust_age;
        fflush(stdin);
        cout << "Enter Customer City : ";
        gets(cust_city);
        cout << "Enter Customer Mobile Number : ";
        cin >> cust_mobile_number;
        cout << "Enter Customer Simcard Validity : ";
        cin >> cust_simcard_validity;
        fflush(stdin);
        cout << "Enter Customer Telecom Brand Name : ";
        gets(cust_telecom_brand_name);
    }

    // getter
    void getCustomerData()
    {
        cout << endl
             << endl;
        cout << "Customer ID : " << cust_id << endl;
        cout << "Customer Name : " << cust_name << endl;
        cout << "Customer Age : " << cust_age << endl;
        cout << "Customer City : " << cust_city << endl;
        cout << "Customer Mobile Number : " << cust_mobile_number << endl;
        cout << "Customer Simcard Validity : " << cust_simcard_validity << endl;
        cout << "Customer Telecom Brand Name : " << cust_telecom_brand_name << endl;
    }
};