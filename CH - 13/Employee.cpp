#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
private:
    int id;
    char name[20];
    int salary;
    char role[20];

public:
    void getEmployeeData()
    {
        cout << endl
             << "Enter Employee ID : ";
        cin >> id;
        fflush(stdin);
        cout << "Enter Emplyee Name : ";
        gets(name);
        cout << "Enter Employee Salary : ";
        cin >> salary;
        fflush(stdin);
        cout << "Enter Employee Post : ";
        gets(role);
    }

    void setEmployeeData()
    {
        cout << endl
             << endl;
        cout << "Employee ID : " << id << endl;
        cout << "Employee Name : " << name << endl;
        cout << "Employee Salary : " << salary << endl;
        cout << "Employee Post : " << role << endl;
    }
};