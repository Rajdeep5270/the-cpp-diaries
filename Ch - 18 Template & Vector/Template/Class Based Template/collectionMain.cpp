#include <iostream>
#include "Collection.h"
using namespace std;

int main()
{
    int ch;
    do
    {
        cout << endl
             << endl
             << "Array Storing Program" << endl
             << endl;
        cout << "1. Array of Integers" << endl;
        cout << "2. Array of Characters" << endl;
        cout << "3. Array of Float Number" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
        {
            Collection<int> number;
            cout << endl
                 << endl
                 << "INTEGERS" << endl
                 << endl;
            cout << "1. Array Input" << endl;
            cout << "2. Array Output" << endl;
            cout << "0. Back" << endl;
            cout << "Enter Choice : ";
            int reCh;
            cin >> reCh;
            switch (reCh)
            {
            case 1:
                number.arrayInput();
                break;

            case 2:
                number.arrayOutput();
                break;

            default:
                number.invalidChoice();
            }
            break;
        }
        case 2:
        {
            Collection<char> chars;
            cout << endl
                 << endl
                 << "INTEGERS" << endl
                 << endl;
            cout << "1. Array Input" << endl;
            cout << "2. Array Output" << endl;
            cout << "Enter Choice : ";
            int reCh;
            cin >> reCh;

            switch (reCh)
            {
            case 1:
                chars.arrayInput();
                break;

            case 2:
                chars.arrayOutput();
                break;

            default:
                chars.invalidChoice();
            }
            break;
        }
        case 3:
        {
            Collection<float> floatingValue;
            cout << endl
                 << endl
                 << "INTEGERS" << endl
                 << endl;
            cout << "1. Array Input" << endl;
            cout << "2. Array Output" << endl;
            cout << "Enter Choice : ";
            int reCh;
            cin >> reCh;

            switch (reCh)
            {
            case 1:
                floatingValue.arrayInput();
                break;

            case 2:
                floatingValue.arrayOutput();
                break;

            default:
                floatingValue.invalidChoice();
            }
            break;
        }
        case 0:
        {
            cout << endl
                 << endl
                 << "EXIT" << endl
                 << endl;
            cout << "Program Exited Successfully...!" << endl;
            break;
        }
        }
    } while (ch != 0);

    // Collection<int> number;
    // number.arrayInput();
    // number.arrayOutput();

    // cout << endl
    //      << endl;

    // Collection<char> chars;
    // chars.arrayInput();
    // chars.arrayOutput();

    // cout << endl
    //      << endl;

    // Collection<float> floatValue;
    // floatValue.arrayInput();
    // floatValue.arrayOutput();
}