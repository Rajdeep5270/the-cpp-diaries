#include <iostream>
#include <string>
using namespace std;

int stringCount(string name) {

    int count = 0;
    for (int i = 0; name[i] != 0; i++)
    {
        count++;
    }
    return count;
}