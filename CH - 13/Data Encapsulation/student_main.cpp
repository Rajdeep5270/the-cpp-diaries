#include <iostream>
#include "E:\C++ Language\CH - 13\Student.cpp"
using namespace std;

int main() {
    int size;

    cout << "Enter number of students : ";
    cin >> size;

    Student student[size];

    for (int i = 0; i < size; i++)
    {
        cout << endl << "No . " << i + 1;
        student[i].setStudents();
    }

    for (int i = 0; i < size; i++)
    {
        cout << endl << "No . " << i + 1;
        student[i].getStudents();
    }
    
    
}