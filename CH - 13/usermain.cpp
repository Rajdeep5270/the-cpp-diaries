#include <iostream>
#include <string.h>
using namespace std;

class User
{
private:
    int id;
    char userName[20];
    string email;
    char password[20];

public:
    // setter
    void setUserData(int id, char userName[], string email, char password[20])
    {
        this->id = id;
        strcpy(this->userName, userName);
        this->email = email;
        strcpy(this->password, password);
    }

    // gettter
    void getUserData()
    {
        cout << "User ID\t\t: " << this->id << endl;
        cout << "User Name\t: " << this->userName << endl;
        cout << "User E-Mail\t: " << this->email << endl;
        cout << "User Password\t: " << this->password << endl;
    }
};