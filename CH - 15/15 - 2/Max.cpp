#include <iostream>
using namespace std;

class Max
{
private:
    int num;

public:
    void setNum()
    {
        cout << "Enter Number : ";
        cin >> this->num;
    }

    void getNum()
    {
        cout << "Biggest Number : " << this->num;
    }

    Max operator>(Max obj)
    {
        Max temp;
        if (this->num > obj.num)
        {
            temp.num = this->num;
        }
        else
        {
            temp.num = obj.num;
        }
        return temp;
    }
};