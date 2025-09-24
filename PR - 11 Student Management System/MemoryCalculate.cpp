#include <iostream>
#include <vector>
using namespace std;

template <typename Tid, typename Tname>
class MemoryCalculate
{
private:
    vector<Tid> id;
    vector<Tname> name;
    bool found;

public:
    // MemoryCalculate()
    // {
    //     cout << endl
    //          << endl
    //          << "Student Data Program" << endl
    //          << endl;
    //     cout << "Enter number of students : ";
    //     cin >> size;
    //     vector<Tid> id(size);
    //     vector<Tname> name(size);

    //     for (int i = 0; i < size; i++)
    //     {
    //         cout << "Enter Student ID\t: ";
    //         cin >> id[i];
    //         cout << "Enter Student Name\t: ";
    //         cin >> name[i];
    //         cout << endl;
    //     }
    // };
    // add student
    void addStudent(int studentId, string studentName)
    {
        found = false;
        for (int i = 0; i < id.size(); i++)
        {
            if (studentId == id[i])
            {
                cout << endl
                     << "Student ID already exist...!";
                found = true;
                break;
            }
        }

        if (!found)
        {
            id.push_back(studentId);
            name.push_back(studentName);
        }

        cout << endl
             << "Successfully Added" << endl;
    }

    // display student
    void displayStudent()
    {
        if (id.empty() && name.empty())
            cout << endl
                 << "No Records. Add Some Students" << endl;
        else
        {
            for (int i = 0; i < id.size(); i++)
            {
                cout << "ID\t: " << id[i] << endl;
                cout << "Name\t: " << name[i] << endl;
                cout << endl
                     << "------------------------" << endl
                     << endl;
            }
        }
    }

    // remove student
    void removeStudent(int studentId)
    {
        found = false;
        for (int i = 0; i < id.size(); i++)
        {
            if (studentId == id[i])
            {
                id.erase(id.begin() + i);
                name.erase(name.begin() + i);
                found = true;
                cout << endl
                     << "Student Record Deleted Successfully...!" << endl;
            }
        }
        if (!found)
            cout << "Student Not Found...!";
    }

    // search student
    void searchStudent(int studentId)
    {
        found = false;
        for (int i = 0; i < id.size(); i++)
        {
            if (studentId == id[i])
            {
                cout << "ID\t: " << id[i] << endl;
                cout << "Name\t: " << name[i] << endl;
                found = true;
            }
        }
        if (!found)
            cout << "Student Not Found...!";
    }

    // title
    void title(int ch)
    {
        if (ch == 1)
            cout << endl
                 << endl
                 << "ADD STUDENT" << endl
                 << endl;
        else if (ch == 2)
            cout << endl
                 << endl
                 << "DISPLAY STUDENT" << endl
                 << endl;
        else if (ch == 3)
            cout << endl
                 << endl
                 << "DELETE STUDENT" << endl
                 << endl;
        else if (ch == 4)
            cout << endl
                 << endl
                 << "SEARCH STUDENT" << endl
                 << endl;
        else if (ch == 0)
            cout << endl
                 << endl
                 << "EXIT" << endl
                 << endl;
    }

    // student id input
    int studentIdInput()
    {
        int id;
        cout << "Enter Student ID\t: ";
        cin >> id;

        return id;
    }

    // exit program functio
    void exitProgram()
    {
        cout << "Program Exited Successfully...!";
    }

    // ignore and get first value
    void ignoreGet(int ch)
    {
        cout << endl
             << endl
             << "Press Enter to Continue...!";

        if (ch == 1)
            cin.get();
        else
        {
            cin.ignore();
            cin.get();
        }
    }
};