#include <iostream>
#include <string.h>
using namespace std;

class Diamond
{
private:
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    double comp_revenue;
    double comp_import_raw_diamonds;
    double comp_export_raw_diamonds;
    string comp_ceo;

public:
    // with Argument Constructor
    Diamond(int comp_id, string comp_name, int comp_staff_quantity, double comp_revenue, double comp_import_raw_diamonds, double comp_export_raw_diamonds, string comp_ceo)
    {
        this->comp_id = comp_id;
        this->comp_name = comp_name;
        this->comp_staff_quantity = comp_staff_quantity;
        this->comp_revenue = comp_revenue;
        this->comp_import_raw_diamonds = comp_import_raw_diamonds;
        this->comp_export_raw_diamonds = comp_export_raw_diamonds;
        this->comp_ceo = comp_ceo;

        setDiamondCompanyData();
    };
    // getter
    // void getDiamondCompanyData()
    // {
    //     cout << endl
    //          << endl;
    //     cout << "Enter Company ID : ";
    //     cin >> comp_id;
    //     cout << "Enter Company Name : ";
    //     cin >> comp_name;
    //     cout << "Enter Company Staff Quantity : ";
    //     cin >> comp_staff_quantity;
    //     cout << "Enter Company Revenue : ";
    //     cin >> comp_revenue;
    //     cout << "Enter Import Raw Diamonds : ";
    //     cin >> comp_import_raw_diamonds;
    //     cout << "Enter Export Raw Diamonds : ";
    //     cin >> comp_export_raw_diamonds;
    //     cout << "Enter Company CEO Name : ";
    //     cin >> comp_ceo;
    // }

    // setter
    void setDiamondCompanyData()
    {
        cout << endl
             << endl;
        cout << "Company ID : " << comp_id << endl;
        cout << "Company Name : " << comp_name << endl;
        cout << "Company Staff Quantity : " << comp_staff_quantity << endl;
        cout << "Company Revenue : " << comp_revenue << endl;
        cout << "Company Import Raw Diamonds : " << comp_import_raw_diamonds << endl;
        cout << "Company Export Raw Diamonds : " << comp_export_raw_diamonds << endl;
        cout << "Company CEO Name : " << comp_ceo << endl;
        cout << "--------------------------------------------------------------" << endl;
    };
};