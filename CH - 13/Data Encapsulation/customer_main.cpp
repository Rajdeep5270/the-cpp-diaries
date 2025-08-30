#include "E:\C++ Language\CH - 13\Customer.cpp"

int main() {
    int size;
    cout << "Enter Number of Customer : ";
    cin >> size;

    Customer customer[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Customer NO . " << i + 1;
        customer[i].setCustomerData();
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Customer NO . " << i + 1;
        customer[i].getCustomerData();
    }
    
    
}