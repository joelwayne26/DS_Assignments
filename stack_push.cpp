#include <iostream>
#include <string>

using namespace std;
#define max 5

class Stack
{
private:
    string arr[max];
    int top;

    public: Stack()
    {
        top=-1;//This means there are no elements in the stack
    }

    bool is_full()
    {
        return top==max-1;
    }

    bool is_empty()
    {
        return top ==-1;
    }

    void push(string element)
    {
        if(is_full())
        {
            cout<<"Overflow";
            return;
        }

        arr[++top]=element;//Adding new element to the stack
        cout<<element<<" has been added to the stack\n";
    }

    void display()
    {
      if(is_empty())
      {
        cout<<"Underflow";
        return;
      }
      cout<<"Elements in the stack: \n";
      for(int i=top;i>=0;i--)// iterating through the stack from top to bottom ie am implementing LIFO
      {
        cout<<arr[i]<<endl;
      }
    }

};

int main()
{
  Stack friends_stack;//Instance of class stack
  string friends_name;
  int n;//The number of friends i want the stack to store
  cout<<"Enter the number of friends: ";
  cin>>n;//Gets input from the user; the number of friends to enter
  cin.ignore();//Ignores the new line after integer input

  for(int i=0;i<n;i++)//for loop to iterate the stack(array) and print "Stack is full!"
  // if the maximum number of elements has been exceeded by the number of items the user wants to input 
  {
    if(i>=max)
    {
        cout<<"Stack is full!";
        break;
    }
    cout<<"Enter the friend's name: ";
    getline(cin,friends_name);//reading an entire line 
    friends_stack.push(friends_name);

  }

  cout <<"final stack contents\n";
  friends_stack.display();
  return 0;

} //screen shot of the results is in the readme file
