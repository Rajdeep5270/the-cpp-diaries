#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    Node *HEAD = new Node();
    HEAD->data = 25;
    HEAD->next = nullptr;

    Node *current = new Node();
    current->data = 33;
    current->next = nullptr;
    HEAD->next = current;

    current = new Node();
    current->data = 56;
    current->next = nullptr;
    HEAD->next->next = current;

    current = new Node();
    current->data = 78;
    current->next = nullptr;
    HEAD->next->next->next = current;

    Node *ptr = HEAD;

    // cout << HEAD->data << endl;
    // cout << HEAD->next << endl;
    // cout << endl;
    // cout << current->data << endl;
    // cout << HEAD->next->next << endl;
    // cout << endl;
    // cout << current->data << endl;
    // cout << HEAD->next->next->next << endl;
    // cout << endl;
    // cout << current->data << endl;
    // cout << HEAD->next->next->next->next << endl;

    do
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr != NULL);

    return 0;
}