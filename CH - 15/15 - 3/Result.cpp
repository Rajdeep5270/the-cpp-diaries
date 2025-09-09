#include <iostream>
using namespace std;

class Result
{
private:
    float sub[6];

public:
    // setter
    void sci()
    {
        cout << "Enter Science Subject Marks : ";
        cin >> sub[0];

        sub[1] = sub[0] - 3;
        sub[2] = sub[0] - 1;
        sub[3] = sub[0] + 1;
        sub[4] = sub[0] - 2;
        sub[5] = sub[0] + 2;
    }

    void operator-()
    {
        cout << "Science Marks : " << sub[0] << endl;
        cout << "Maths Marks : " << sub[1] << endl;
        cout << "English Marks : " << sub[2] << endl;
        cout << "Gujarati Marks : " << sub[3] << endl;
        cout << "Social Science Marks : " << sub[4] << endl;
        cout << "Computer Marks : " << sub[5] << endl;
    }
};