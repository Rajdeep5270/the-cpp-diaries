#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // stock buy and sell program

    int size;

    cout << "Enter Number of Days : ";
    cin >> size;

    vector<int> v(size);

    cout << endl
         << endl
         << "Enter Price of Days" << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter day[" << i + 1 << "] : ";
        cin >> v[i];
    }

    cout << endl
         << endl
         << "Prices of Difference Days" << endl
         << endl;
    int min = v[0];
    int buy = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "Day [" << i + 1 << "] : " << v[i] << endl;
        if (v[i] < min)
        {
            min = v[i];
            buy = i;
        }
    }

    int max = v[buy];
    for (int i = buy; i < size; i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
    }

    if (min == max)
        cout << endl
             << "No Profit" << endl
             << endl;
    else
        cout << endl
             << endl
             << "Buy at\t: " << min << " Sell at\t: " << max << " Profit = " << max - min << endl
             << endl;
}
