#include <iostream>
using namespace std;

class Student
{
private:
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_email;
    string stu_college;

public:
    // for ignoring character
    template <typename T>
    T ignoreCharacter(T attribute)
    {
        cin.ignore();
        getline(cin, attribute);
        return attribute;
    };

    // setter
    void setData()
    {
        cout << endl
             << endl
             << "ENTER STUDENT DETAILS - " << endl
             << endl;
        cout << "Enter Student ID\t: ";
        cin >> this->stu_id;
        cout << "Enter Student Name\t: ";
        this->stu_name = ignoreCharacter(this->stu_name);
        cout << "Enter Student Age\t: ";
        cin >> this->stu_age;
        cout << "Enter Student Course\t: ";
        this->stu_course = ignoreCharacter(this->stu_course);
        cout << "Enter Student City\t: ";
        cin >> this->stu_city;
        cout << "Enter Student E-mail\t: ";
        cin >> this->stu_email;
        cout << "Enter Student College\t: ";
        this->stu_college = ignoreCharacter(this->stu_college);
    }

    // getter
    void getData()
    {
        cout << endl
             << endl
             << "DISPLAY STUDENT DATA" << endl
             << endl;
        cout << "Student ID\t: " << this->stu_id << endl;
        cout << "Student Name\t: " << this->stu_name << endl;
        cout << "Student Age\t: " << this->stu_age << endl;
        cout << "Student Course\t: " << this->stu_course << endl;
        cout << "Student City\t: " << this->stu_city << endl;
        cout << "Student E-Mail\t: " << this->stu_email << endl;
        cout << "Student College\t: " << this->stu_college << endl;
    }
};

class StudentManager : public Student
{
private:
    int size;
    Student *arr;

public:
    StudentManager()
    {
        numberOfElements();

        arr = new Student[size];

        if (arr == nullptr)
            cout << "Memory Allocation Failed...";

        inputStudentData();
        getStudentData();
    }

    int numberOfElements()
    {
        cout << "Enter Number of Elements : ";
        cin >> this->size;

        return size;
    };

    void inputStudentData()
    {
        for (int i = 0; i < size; i++)
        {
            arr[i].setData();
        }
    };

    void getStudentData()
    {
        for (int i = 0; i < size; i++)
        {
            arr[i].getData();
        }
    }

    ~StudentManager()
    {
        delete[] arr;
        arr = nullptr;

        if (arr != nullptr)
            cout << "Memory Deallocation Failed...";
    };
};
