#include <iostream>
using namespace std;

main()
{

    cout << endl
         << "Alphabets Skipper Program" << endl;

    char i = 'a';

    do{
        cout << i << " ";
        i += 4;
    }while(i <= 'z');
}