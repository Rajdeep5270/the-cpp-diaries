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

class Count
{
public:
    Node *head;

    Count()
    {
        head = nullptr;
    }

    void addNodes(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = this->head;
        this->head = newNode;
    }

    void countNodes()
    {
        int counter = 0;
        Node *ptr = head;
        while (ptr != nullptr)
        {
            counter++;
            ptr = ptr->next;
        }

        cout << endl
             << endl
             << "Total Elements : " << counter << endl
             << endl;
    }
};

int main()
{
    Count c;
    c.addNodes(10);
    c.addNodes(20);
    c.addNodes(30);
    c.addNodes(40);
    c.addNodes(50);

    c.countNodes();
}