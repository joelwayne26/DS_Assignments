#include <iostream>
#include <string>

using namespace std;
#define MAX 5

class Stack
{
private:
    string arr[MAX];
    int top;

public:
    Stack() { top = -1; }

    bool is_full() { return top == MAX - 1; }
    bool is_empty() { return top == -1; }

    void push(string element)
    {
        if (is_full())
        {
            cout << "Stack Overflow! Cannot add more friends.\n";
            return;
        }
        arr[++top] = element;
        cout << element << " has been added to the stack\n";
    }

    void pop()
    {
        if (is_empty())
        {
            cout << "Stack Underflow! No friends to remove.\n";
            return;
        }
        cout << arr[top] << " has been removed from the stack.\n";
        top--;
    }

    void peek()
    {
        if (is_empty())
        {
            cout << "Stack is empty! No top element.\n";
            return;
        }
        cout << "Top element (peek): " << arr[top] << endl;
    }

    void display()
    {
        if (is_empty())
        {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "Friends in the stack:\n";
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    Stack friends_stack;

 
    friends_stack.push("Alice");
    friends_stack.push("Bob");
    friends_stack.push("Charlie");
    friends_stack.push("David");
    friends_stack.push("Eve");

    cout << "\nStack after pushing elements:\n";
    friends_stack.display();

    // Peek at the top element
    cout << "\nPeeking at the top element...\n";
    friends_stack.peek();

    // Pop the top element
    cout << "\nPopping the top element...\n";
    friends_stack.pop();

    // Peek again after popping
    cout << "\nPeeking at the new top element...\n";
    friends_stack.peek();

    return 0;
}
