#include <iostream>
using namespace std;

template <typename T1, typename T2>
class ClassTemplate
{
private:
    T1 x;
    T2 y;

public:
    ClassTemplate(T1 x, T2 y)
    {
        this->x = x;
        this->y = y;
    };

    // getter
    void getData()
    {
        cout << "X\t: " << this->x << endl
             << "Y\t: " << this->y << endl;
    };
};