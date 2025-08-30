#include <iostream>
#include <string.h>
using namespace std;

class Student
{
private:
    int stu_id;
    char stu_name[20];
    int stu_age;
    char stu_course[20];
    char stu_city[20];
    char stu_email[20];
    char stu_college[20];

public:
    // setter
    void setStudents()
    {
        cout << endl
             << endl;
        cout << "Enter Student ID : ";
        cin >> stu_id;
        fflush(stdin);
        cout << "Enter Student Name : ";
        gets(stu_name);
        cout << "Enter Student Age : ";
        cin >> stu_age;
        fflush(stdin);
        cout << "Enter Student Course : ";
        gets(stu_course);
        cout << "Enter Student City : ";
        gets(stu_city);
        cout << "Enter Student Email : ";
        gets(stu_email);
        cout << "Enter Student College Name : ";
        gets(stu_college);
    }

    // setter
    void getStudents()
    {
        cout << endl
             << endl;
        cout << "Student ID\t: " << stu_id << endl;
        cout << "Student Name\t: " << stu_name << endl;
        cout << "Student Age\t: " << stu_age << endl;
        cout << "Student Course\t: " << stu_course << endl;
        cout << "Student City\t: " << stu_city << endl;
        cout << "Student Email\t: " << stu_email << endl;
        cout << "Student College Name\t: " << stu_college << endl;
    }
};