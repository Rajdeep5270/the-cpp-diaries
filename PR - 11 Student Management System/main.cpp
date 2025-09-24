#include <iostream>
#include "MemoryCalculate.cpp"
using namespace std;

int main()
{
    MemoryCalculate<int, string> mc1;

    int ch, id;
    string name;

    do
    {
        system("cls");
        cout << endl
             << endl
             << "Student Crud Operation Program" << endl
             << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display all Student" << endl;
        cout << "3. Delete Student Record" << endl;
        cout << "4. Search Student" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            system("cls");
            mc1.title(ch);
            id = mc1.studentIdInput();
            fflush(stdin);
            cout << "Enter Student Name\t: ";
            getline(cin, name);
            mc1.addStudent(id, name);
            mc1.ignoreGet(ch);
            break;

        case 2:
            system("cls");
            mc1.title(ch);
            mc1.displayStudent();
            mc1.ignoreGet(ch);
            break;

        case 3:
            system("cls");
            mc1.title(ch);
            id = mc1.studentIdInput();
            mc1.removeStudent(id);
            mc1.ignoreGet(ch);
            break;

        case 4:
            system("cls");
            mc1.title(ch);
            id = mc1.studentIdInput();
            mc1.searchStudent(id);
            mc1.ignoreGet(ch);
            break;

        case 0:
            system("cls");
            mc1.title(ch);
            mc1.exitProgram();
            mc1.ignoreGet(ch);
            break;

        default:
            system("cls");
            cout << "Invalid Choice";
        }
    } while (ch != 0);
}