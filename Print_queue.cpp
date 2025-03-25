#include <iostream>
#include <string>

using namespace std;

#define MAX 5 // Maximum queue size

class PrinterQueue
{
private:
    string queue[MAX]; // Array to store documents
    int front, rear;

public:
    PrinterQueue()
    {
        front = -1; // Queue is initially empty
        rear = -1;
    }

    bool is_empty()
    {
        return front == -1 || front > rear;
    }

    bool is_full()
    {
        return rear == MAX - 1;
    }

    void add_document(string document)
    {
        if (is_full())
        {
            cout << "Queue is full. Cannot add more documents.\n";
            return;
        }
        if (is_empty())
            front = 0;

        queue[++rear] = document;
        cout << "Added to queue: " << document << endl;
    }

    void print_document()
    {
        if (is_empty())
        {
            cout << "No documents in the queue to print.\n";
            return;
        }

        cout << "Printing: " << queue[front] << endl;
        front++;

        if (front > rear) // Reset queue when empty
        {
            front = -1;
            rear = -1;
        }
    }

    void display_queue()
    {
        if (is_empty())
        {
            cout << "Print queue is empty.\n";
            return;
        }
        cout << "Current documents in the queue:\n";
        for (int i = front; i <= rear; i++)
        {
            cout << "- " << queue[i] << endl;
        }
    }
};

int main()
{
    PrinterQueue pq;
    int choice;
    string doc_name;

    while (true)
    {
        cout << "\n1. Add document\n2. Print document\n3. Show queue\n4. Exit\nChoose an option: ";
        cin >> choice;
        cin.ignore(); // Ignore newline after number input

        switch (choice)
        {
        case 1:
            cout << "Enter document name: ";
            getline(cin, doc_name);
            pq.add_document(doc_name);
            break;
        case 2:
            pq.print_document();
            break;
        case 3:
            pq.display_queue();
            break;
        case 4:
            cout << "Exiting \n";
            return 0;
        default:
            cout << "Invalid option! Try again.\n";
        }
    }

    return 0;
}
