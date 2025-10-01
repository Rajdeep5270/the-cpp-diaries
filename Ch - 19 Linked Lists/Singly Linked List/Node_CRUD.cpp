#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        this->data = value;
        this->next = nullptr;
    }
};

class NodeMethods
{
public:
    Node *HEAD;

    void addStarting(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = HEAD;
        HEAD = newNode;
    }

    void addEnding(int data)
    {
        Node *newNode = new Node(data);
        if (HEAD == nullptr)
        {
            newNode->next = HEAD;
            HEAD = newNode;
        }
        else
        {
            Node *ptr = HEAD;
            do
            {
                ptr = ptr->next;
            } while (ptr->next != NULL);
            ptr->next = newNode;
        }
    }

    void fetchData()
    {
        if (HEAD == nullptr)
        {
            cout << endl
                 << endl
                 << "List is Empty" << endl
                 << endl;
            return;
        }
        Node *ptr = HEAD;
        cout << "Linked Lists : ";
        do
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        } while (ptr != NULL);
        cout << endl
             << endl;
    }
};

int main()
{
    NodeMethods n1;
    int ch, data;

    cout << endl
         << endl
         << "CRUD Program Node" << endl
         << endl;
    do
    {
        cout << "1. Add from start" << endl;
        cout << "2. Add from last" << endl;
        cout << "3. Add from position" << endl;
        cout << "4. Fetch all data" << endl;
        cout << "5. Update" << endl;
        cout << "6. Delete" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter Your Choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << endl
                 << endl
                 << "Add From Start" << endl
                 << endl;
            cout << "Enter element : ";
            cin >> data;
            n1.addStarting(data);
            break;
        case 2:
            cout << endl
                 << endl
                 << "Add From Ending" << endl
                 << endl;
            cout << "Enter element : ";
            cin >> data;
            n1.addEnding(data);
            break;
        case 3:

            break;
        case 4:
            cout << endl
                 << endl
                 << "Fetch Data" << endl
                 << endl;
            n1.fetchData();
            break;
        case 5:

            break;
        case 6:

            break;
        case 0:
            cout << endl
                 << endl
                 << "Program Exited Successfully...!" << endl
                 << endl;
            break;
        default:
            cout << endl
                 << endl
                 << "Invalid Choice" << endl
                 << endl;
        }
    } while (ch != 0);

    return 0;
}