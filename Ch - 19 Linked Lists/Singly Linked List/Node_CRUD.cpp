#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;
    int count;

    LinkedList()
    {
        this->head = nullptr;
        this->count = 0;
    }

    // add from beginning
    void addFromBeginning(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = this->head;
        this->head = newNode;
        count++;
    }

    // add from ending
    void addFromEnding(int data)
    {
        Node *newNode = new Node(data);
        if (this->head == nullptr)
        {
            newNode->next = this->head;
            this->head = newNode;
        }
        else
        {
            Node *ptr = this->head;
            while (ptr->next != nullptr)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
        count++;
    }

    // add at any position
    void addAtAnyPosition(int data, int position)
    {
        Node *newNode = new Node(data);
        if (head == nullptr)
        {
            cout << endl
                 << endl
                 << "No Element" << endl
                 << endl;
        }
        else
        {
            if (position > 1 && position < count)
            {
                Node *ptr = this->head;
                for (int i = 0; i < position - 1; i++)
                {
                    ptr = ptr->next;
                }
                newNode->next = ptr->next;
                ptr->next = newNode;
                count++;
            }
            else
            {
                cout << endl
                     << endl
                     << "Invalid Position" << endl
                     << endl;
            }
        }
    }

    // update node
    void update(int data, int position)
    {
        if (this->head == nullptr && this->count == 0)
        {
            cout << endl
                 << "List is empty...!" << endl
                 << endl;
            return;
        }

        if (position < 0 || position > count)
        {
            cout << endl
                 << "Invalid Position...!" << endl
                 << endl;
            return;
        }

        Node *ptr = this->head;
        for (int i = 0; i < position; i++)
        {
            ptr = ptr->next;
        }
        ptr->data = data;
    }

    // delete node from beginning
    void deleteFromBeginning()
    {
        if (head == nullptr && count == 0)
        {
            cout << endl
                 << "List is empty...!" << endl
                 << endl;
            return;
        }
        Node *ptr = this->head;
        this->head = this->head->next;

        delete ptr;
        ptr = nullptr;
        count--;
    }

    // delete node from ending
    void deleteFromEnding()
    {
        if (head == nullptr || count == 0)
        {
            cout << endl
                 << "List is empty...!" << endl
                 << endl;
            return;
        }

        Node *ptr = this->head;
        while (ptr->next->next != nullptr)
        {
            ptr = ptr->next;
        }

        delete ptr->next;
        ptr->next = nullptr;
        ptr = nullptr;
        count--;
    }

    // delete at any position
    void deleteAtAnyPosition(int position)
    {
        if (head == nullptr && count == 0)
        {
            cout << endl
                 << "List is empty...!" << endl
                 << endl;
            return;
        }

        if (position < 0 || position >= count)
        {
            cout << endl
                 << "Invalid position...!" << endl
                 << endl;
            return;
        }

        if (position == 0)
        {
            Node *temp = this->head;
            this->head = this->head->next;
            delete temp;
            temp = nullptr;
            count--;
            return;
        }

        Node *prev = this->head;
        Node *current = this->head;

        for (int i = 0; i < position; i++)
            current = current->next;

        for (int i = 0; i < position - 1; i++)
            prev = prev->next;

        prev->next = current->next;

        delete current;
        current = nullptr;

        prev = nullptr;
        delete prev;
        count--;
    }

    // length of nodes
    int countLength()
    {
        return this->count;
    }

    // display all data
    void displayAllData()
    {
        Node *ptr = this->head;
        if (this->head == nullptr || count == 0)
        {
            cout << endl
                 << endl
                 << "No Elements are there." << endl
                 << endl;
        }
        else
        {
            cout << endl
                 << endl
                 << "Elements are : ";
            while (ptr != nullptr)
            {
                cout << ptr->data << " ";
                ptr = ptr->next;
            }
            cout << endl
                 << endl;
        }
    }
};

int main()
{
    LinkedList l1;

    int ch;
    int data, position;

    do
    {
        cout << endl
             << endl
             << "Node Crud Operation" << endl
             << endl;
        cout << "1. Insert Beginning" << endl;
        cout << "2. Insert Ending" << endl;
        cout << "3. Insert at any position" << endl;
        cout << "4. Update" << endl;
        cout << "5. Delete from Beginning" << endl;
        cout << "6. Delete from Ending" << endl;
        cout << "7. Delete at any position" << endl;
        cout << "8. Display all Data" << endl;
        cout << "9. Length of Nodes" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter element : ";
            cin >> data;
            l1.addFromBeginning(data);
            break;

        case 2:
            cout << "Enter element : ";
            cin >> data;
            l1.addFromEnding(data);
            break;

        case 3:
            cout << "Enter element : ";
            cin >> data;
            cout << "Enter position : ";
            cin >> position;
            l1.addAtAnyPosition(data, position);
            break;

        case 4:
            cout << "Enter element : ";
            cin >> data;
            cout << "Enter position : ";
            cin >> position;
            l1.update(data, position);
            break;

        case 5:
            l1.deleteFromBeginning();
            break;

        case 6:
            l1.deleteFromEnding();
            break;

        case 7:
            cout << "Enter position : ";
            cin >> position;
            l1.deleteAtAnyPosition(position);
            break;

        case 8:
            l1.displayAllData();
            break;

        case 9:
            cout << endl
                 << "Length of nodes : " << l1.countLength() << endl
                 << endl;
            break;

        case 0:
            cout << endl
                 << endl
                 << "Exiting Program...!" << endl
                 << endl;
            break;

        default:
            cout << endl
                 << endl
                 << "Invalid Choice" << endl
                 << endl;
        }
    } while (ch != 0);
}