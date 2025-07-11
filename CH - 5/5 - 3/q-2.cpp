#include <iostream>
#include <cstdlib>
using namespace std;

main()
{
    int num;

    cout << "Enter 1 For English" << endl
         << "Enter 2 for Hindi" << endl
         << "Enter 3 for Gujarati" << endl
         << "Enter Your Choice : ";
    cin >> num;

    switch (num)
    {
    case 1:
        system("cls");
        cout << "Enter 1 for Internet Recharge" << endl
             << "Enter 2 for Top-up Recharge" << endl
             << "Enter 3 for Special Recharge" << endl
             << "Enter Your Choice : ";
        cin >> num;

        switch (num)
        {
        case 1:
            system("cls");
            cout << endl
                 << "You Have Successfully Done a Internet Recharge.";
            break;

        case 2:
            system("cls");
            cout << endl
                 << "You Have Successfully Done a Top-up Recharge.";
            break;

        case 3:
            system("cls");
            cout << endl
                 << "You Have Successfully Done a Special Recharge.";
            break;

        default:
            system("cls");
            cout << endl
                 << "Invalid Choice";
        }
        break;

    case 2:
        system("cls");
        cout << "Internet Recharge ke liye 1 dabaiye" << endl
             << "Top-up Recharge ke liye 2 dabaiye" << endl
             << "Special Recharge ke liye 3 dabaiye" << endl
             << "Apni Choice Daliye : ";
        cin >> num;

        switch (num)
        {
        case 1:
            system("cls");
            cout << endl
                 << "Aapne safaltapurvak Internet Recharge kar liya he.";
            break;

        case 2:
            system("cls");
            cout << endl
                 << "Aapne safaltapurvak Top-up Recharge kar liya he.";
            break;

        case 3:
            system("cls");
            cout << endl
                 << "Aapne safaltapurvak Special Recharge kar liya he.";
            break;

        default:
            system("cls");
            cout << endl
                 << "Invalid Choice";
        }
        break;

    case 3:
        system("cls");
        cout << "Internet Recharge mate 1 dabavo" << endl
             << "Top-up Recharge mate 2 dabavo" << endl
             << "Special Recharge mate 3 dabavo" << endl
             << "Tamari Choice Nakho : ";
        cin >> num;

        switch (num)
        {
        case 1:
            system("cls");
            cout << endl
                 << "Tame safaltapurvak Internet Recharge karyu chhe.";
            break;

        case 2:
            system("cls");
            cout << endl
                 << "Tame safaltapurvak Top-up Recharge karyu chhe.";
            break;

        case 3:
            system("cls");
            cout << endl
                 << "Tame safaltapurvak Special Recharge karyu chhe.";
            break;

        default:
            system("cls");
            cout << endl
                 << "Invalid Choice";
        }
        break;

    default:
        system("cls");
        cout << "Invalid Choice";
    }
}