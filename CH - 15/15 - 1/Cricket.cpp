#include <iostream>
using namespace std;

class Cricket
{
protected:
    float fOvers;

public:
    void setMatchData()
    {
        cout << endl
             << "Enter Overs of the Match : ";
        cin >> this->fOvers;
    }

    void getTotalOvers()
    {
        cout << endl
             << "Cricket Match : " << this->fOvers << endl;
    }
};

class TestMatch : public Cricket
{
public:
    void getTotalOvers()
    {
        cout << endl
             << "Test Match Overs : " << this->fOvers << endl;
    }
};