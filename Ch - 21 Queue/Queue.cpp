#include <iostream>
using namespace std;

// abstract class
class Queue
{
private:
    virtual void enqueue(int element) = 0;
    virtual void dequeue() = 0;
    virtual void get_front() = 0;
    virtual void get_rear() = 0;
    virtual void display() = 0;
    virtual void isEmpty() = 0;
    virtual void isFull() = 0;
    virtual int size() = 0;
};

template <typename T>
class MyQueue : public Queue
{
private:
    T *arr;
    int front;
    int rear;
    int count;
    int capacity;

public:
    MyQueue(int capacity)
    {
        this->capacity = capacity;
        this->arr = new T[this->capacity];
        this->front = -1;
        this->rear = -1;
        this->count = 0;
    }

    ~MyQueue()
    {
        delete[] arr;
    }

    // to add first element and elements
    void enqueue(int element)
    {
        if (this->rear == this->capacity - 1)
        {
            cout << endl
                 << "Queue is overflow...!" << endl;
        }
        else if (this->front == -1 && this->rear == -1)
        {
            front++;
            rear++;
            arr[rear] = element;
            count++;
            cout << endl
                 << "Queue element enqueue successfully...!" << endl;
        }
        else
        {
            rear++;
            arr[rear] = element;
            count++;
            cout << endl
                 << "Queue element enqueue successfully...!" << endl;
        }
    }

    // to remove element from starting
    void dequeue()
    {
        if (front == -1 && rear == -1)
        {
            cout << endl
                 << "Queue is empty...!" << endl;
        }
        else if (this->front == this->rear)
        {
            this->front = -1;
            this->rear = -1;
            count--;
            cout << endl
                 << "Queue element dequeue successfully...!" << endl;
        }
        else
        {
            front++;
            count--;
            cout << endl
                 << "Queue element dequeue successfully...!" << endl;
        }
    }

    // to get front element
    void get_front()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is empty...!" << endl;
        }
        else
        {
            cout << endl
                 << "Queue front element : " << arr[front] << endl;
        }
    }

    // to get rear element
    void get_rear()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is empty...!" << endl;
        }
        else
        {
            cout << endl
                 << "Queue rear element : " << arr[rear] << endl;
        }
    }

    // to display queue elements
    void display()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << endl
                 << "Queue is empty...!" << endl;
        }
        else
        {
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
        }
    }

    // to check whether queue is empty or not
    void isEmpty()
    {
        if (front == -1 && rear == -1)
            cout << endl
                 << "Queue is empty...!" << endl;
        else
            cout << endl
                 << "Queue is not empty...!" << endl;
    }

    // to check whether queue is full or not
    void isFull()
    {
        if (this->rear == capacity - 1)
            cout << endl
                 << "Queue is full...!" << endl;
    }

    // to get queue size
    int size()
    {
        return capacity;
    }
};