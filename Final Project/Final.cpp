#include <iostream>
using namespace std;

class LinkedList
{
private:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int x)
        {
            data = x;
            next = NULL;
        }
    };

    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    // Insert at end
    void insert(int x)
    {
        Node *n = new Node(x);
        if (head == NULL)
        {
            head = n;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = n;
        }
        cout << "Inserted." << endl;
    }

    // Display
    void display()
    {
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }
        Node *temp = head;
        cout << "Linked List: ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Search
    void search(int key)
    {
        Node *temp = head;
        int pos = 1;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                cout << "Value found at position " << pos << endl;
                return;
            }
            temp = temp->next;
            pos++;
        }

        cout << "Value not found." << endl;
    }

    // Delete a value
    void deleteValue(int key)
    {
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }

        if (head->data == key)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            cout << "Deleted." << endl;
            return;
        }

        Node *temp = head;
        while (temp->next != NULL)
        {
            if (temp->next->data == key)
            {
                Node *del = temp->next;
                temp->next = temp->next->next;
                delete del;
                cout << "Deleted." << endl;
                return;
            }
            temp = temp->next;
        }

        cout << "Value not found." << endl;
    }
};

// merge sort

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1], b[n2];
    for (int i = 0; i < n1; i++)
        a[i] = arr[l + i];
    for (int i = 0; i < n2; i++)
        b[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
            arr[k++] = a[i++];
        else
            arr[k++] = b[j++];
    }

    while (i < n1)
        arr[k++] = a[i++];
    while (j < n2)
        arr[k++] = b[j++];
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

// quick sort

int partitionFun(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;

    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[r]);
    return i + 1;
}

void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int p = partitionFun(arr, l, r);
        quickSort(arr, l, p - 1);
        quickSort(arr, p + 1, r);
    }
}

// binary search

int binarySearch(int arr[], int n, int x)
{
    int l = 0, r = n - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}
