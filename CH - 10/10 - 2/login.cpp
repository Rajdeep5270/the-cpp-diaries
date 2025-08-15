#include <iostream>
#include <string>

#define EMAIL "admin@gmail.com"
#define PASSWORD "123456"

using namespace std;

int main() {

    string email, pass;

    cout << "Enter Email : ";
    cin >> email;
    cout << "Enter Password : ";
    cin >> pass;

    if(EMAIL == email && PASSWORD == pass)
        cout << "Login Successfully...!";
    else 
        cout << "Invalid Credentials";
    return 0;
}