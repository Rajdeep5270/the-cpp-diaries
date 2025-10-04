#include <iostream>
using namespace std;

// DDA = Dynamic Data Allocation
class DDA
{
public:
    int newNode;
    DDA *nextNode;
    int count = 0;

    DDA *head;

    DDA()
    {
        head = nullptr;
    };

    DDA(int data)
    {
        this->newNode = data;
        this->nextNode = nullptr;
    }

    // add at beginning
    void insertFromBeginning(int data)
    {
        DDA *newData = new DDA(data);
        newData->nextNode = this->head;
        this->head = newData;
        count++;
    }

    // add at ending
    void append(int data)
    {
        DDA *newData = new DDA(data);
        if (head == nullptr)
        {
            newData->nextNode = this->head;
            this->head = newData;
        };

        DDA *ptr = this->head;

        while (ptr->nextNode != nullptr)
        {
            ptr = ptr->nextNode;
        }
        ptr->nextNode = newData;
        count++;
    }

    // search element
    void searchElement(int ele)
    {
        if (head == nullptr)
        {
            cout << endl
                 << "List is Empty...!" << endl
                 << endl;
            return;
        }

        DDA *ptr = this->head;
        while (ptr->nextNode != nullptr)
        {
            if (ptr->newNode == ele)
            {
                cout << endl
                     << "Element Found\t: " << ele << endl
                     << endl;
                return;
            }
            ptr = ptr->nextNode;
        }

        if (ptr->nextNode == nullptr)
            cout << endl
                 << "Element not Found\t: " << ele << endl
                 << endl;
    }

    // delete element by value
    void deleteElementByValue(int ele)
    {
        if (head == nullptr)
        {
            cout << endl
                 << "List is Empty...!" << endl
                 << endl;
            return;
        }

        DDA *current = this->head;
        DDA *prev = this->head;

        if (ele == head->newNode)
        {
            head = head->nextNode;
            delete current;
            current = nullptr;
            count--;
            return;
        }

        while (current != nullptr)
        {
            if (current->newNode == ele)
            {
                break;
            }
            current = current->nextNode;
        }

        if (current == nullptr)
        {
            cout << endl
                 << "Element not Found\t: " << ele << endl
                 << endl;
            return;
        }

        while (prev->nextNode != current)
        {
            prev = prev->nextNode;
        }

        prev->nextNode = current->nextNode;
        count--;

        delete current;
        current = nullptr;
    }

    // to reverse linked list
    void reverseLinkedList()
    {
        if (head == nullptr)
        {
            cout << endl
                 << "List is Empty...!" << endl
                 << endl;
            return;
        }

        DDA *current = head;
        DDA *prev = nullptr;
        DDA *next = nullptr;

        while (current != nullptr)
        {
            next = current->nextNode;
            current->nextNode = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    // number of elements
    void numberOfElements()
    {
        cout << endl
             << "Number of Elements\t: " << count << endl
             << endl;
    }

    // display all nodes
    void displayNodes()
    {
        if (head == nullptr)
        {
            cout << endl
                 << "List is Empty...!" << endl
                 << endl;
            return;
        }

        DDA *ptr = this->head;

        cout << endl
             << "Elements are : ";
        while (ptr != nullptr)
        {
            cout << ptr->newNode << " ";
            ptr = ptr->nextNode;
        }
    }

    // verification message
    void invalidChoice()
    {
        cout << endl
             << endl
             << "Invalid Choice" << endl
             << endl;
    }

    // program exited successfully
    void successfullyExit()
    {
        cout << endl
             << endl
             << "Program Exited Successfully...!" << endl
             << endl;
    }

    // use for program doesnt skip
    void ignore()
    {
        cout << endl
             << "Press Enter to Continue...!" << endl
             << endl;

        cin.ignore();
        cin.get();
    }
};