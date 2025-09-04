#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

class Railway
{
private:
    int train_number;
    char train_name[20];
    char source[20];
    char destination[20];
    int time;

public:
    // getter
    void setTrainData()
    {
        cout << endl
             << endl;
        cout << "Enter Train Number : ";
        cin >> train_number;
        fflush(stdin);
        cout << "Enter Train Name : ";
        gets(train_name);
        cout << "Enter Train Source Station : ";
        gets(source);
        cout << "Enter Train Destination Station : ";
        gets(destination);
        cout << "Enter Train Time : ";
        cin >> time;
        fflush(stdin);
    }

    // setter
    void getTrainData()
    {
        cout << endl;
        cout << "---------------------------------------------";
        cout << "---------------------------------------------";
        cout << endl;
        cout << "Train Number: " << train_number << endl;
        cout << "Train Name: " << train_name << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "Time: " << time << endl;
    }

    bool detailsFinder(int number)
    {
        return train_number == number;
    }
};

class RailwaySystem
{
private:
    Railway trains[50];
    int size;

public:
    void menu()
    {
        int ch = 1;
        while (ch != 0)
        {
            system("cls");
            cout << "1. Add Train Details" << endl;
            cout << "2. Display All Records" << endl;
            cout << "0. Exit" << endl
                 << endl;
            cout << "Enter Your Choice : ";
            cin >> ch;

            bool found = false;
            switch (ch)
            {
            case 1:
                system("cls");
                cout << endl
                     << "ADD TRAIN DETAILS" << endl
                     << endl;
                cout << "Enter Number of Trains : ";
                cin >> size;
                system("cls");
                for (int i = 0; i < size; i++)
                {
                    cout << endl
                         << "Enter Details For Train No. " << i + 1
                         << endl;
                    trains[i].setTrainData();
                }

                break;
            case 2:
                system("cls");
                int subChoice;
                cout << endl
                     << "DISPLAY RECORDS" << endl
                     << endl;
                cout << "1. Display All Records" << endl;
                cout << "2. Search By Train Number" << endl
                     << endl;
                cout << "Enter Your Choice : ";
                cin >> subChoice;

                switch (subChoice)
                {
                case 1:
                    for (int i = 0; i < size; i++)
                    {
                        cout << "Train No. " << i + 1 << endl;
                        trains[i].getTrainData();
                    }

                    cout << "\nPress Enter to continue...";
                    cin.ignore();
                    cin.get();
                    break;
                case 2:
                    system("cls");
                    int number;
                    cout << "Enter Train Number to Find : ";
                    cin >> number;

                    for (int i = 0; i < size; i++)
                    {
                        if (trains[i].detailsFinder(number))
                        {
                            trains[i].getTrainData();
                            found = true;
                        }
                    }

                    if (!found)
                    {
                        cout << endl
                             << "Train Not Found...!" << endl
                             << endl;
                    }

                    cout << "\nPress Enter to continue...";
                    cin.ignore();
                    cin.get();

                    break;
                default:
                    cout << endl
                         << "Train Not Found" << endl
                         << endl;
                }
                break;
            case 0:
                system("cls");
                cout << endl
                     << "EXIT" << endl
                     << endl;
                cout << "Program Exited Successfully...!";
                break;
            default:
                cout << endl
                     << "Invalid Choice! Please Re-try." << endl
                     << endl;
            }
        }
    }
};
