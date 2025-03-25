#include <iostream>
using namespace std;

#define MAX 5 // Maximum size of the queue

class Queue
{
private:
    int arr[MAX]; // Array to store queue elements
    int front, rear;

public:
    Queue()
    {
        front = -1; // No elements in queue
        rear = -1;
    }

    bool is_full()
    {
        return rear == MAX - 1;
    }

    bool is_empty()
    {
        return front == -1 || front > rear;
    }

    void push(int element) // Enqueue operation
    {
        if (is_full())
        {
            cout << "Queue Overflow! Cannot add more elements.\n";
            return;
        }
        if (is_empty()) // If queue is empty, reset front to 0
            front = 0;
        
        arr[++rear] = element;
        cout << element << " has been added to the queue.\n";
    }

    void display()
    {
        if (is_empty())
        {
            cout << "Queue is empty.\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q;

    // Pushing  elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    
    cout << "\nQueue after enqueue operations:\n";
    q.display();

    return 0;
}
