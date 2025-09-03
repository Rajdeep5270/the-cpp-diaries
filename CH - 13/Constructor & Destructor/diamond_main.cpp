#include <iostream>
#include <string.h>
#include "Diamond.cpp"
using namespace std;

int main()
{

    int size;

    cout << "Enter Number of Companies : ";
    cin >> size;

    int comp_id, comp_staff_quantity;
    double comp_revenue, comp_import_raw_diamonds, comp_export_raw_diamonds;
    char comp_name[20], comp_ceo[20];

    for (int i = 0; i < size; i++)
    {
        cout << endl
             << endl;
        cout << "Enter Company ID : ";
        cin >> comp_id;
        fflush(stdin);
        cout << "Enter Company Name : ";
        gets(comp_name);
        cout << "Enter Company Staff Quantity : ";
        cin >> comp_staff_quantity;
        cout << "Enter Company Revenue : ";
        cin >> comp_revenue;
        cout << "Enter Import Raw Diamonds : ";
        cin >> comp_import_raw_diamonds;
        cout << "Enter Export Raw Diamonds : ";
        cin >> comp_export_raw_diamonds;
        fflush(stdin);
        cout << "Enter Company CEO Name : ";
        gets(comp_ceo);
        fflush(stdin);

        Diamond diamond(comp_id, comp_name, comp_staff_quantity, comp_revenue, comp_import_raw_diamonds, comp_export_raw_diamonds, comp_ceo);
    }
}