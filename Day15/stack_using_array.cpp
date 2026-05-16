#include<iostream>
using namespace std;

class Stack
{
    private:
    int data;
    int arr[100];

    public:

    Stack()
    {
        data = -1; // Stack is empty when data is -1
    }

    void push(int x)
    {
        if (data < 99)
        {
            data ++;
            arr[data] = x;
        }
        else{
            cout << "Stack overflow" << endl;
        }
    }

    int peek()
    {
        if (data >= 0)
        {
            return arr[data];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1; 
        }
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);;
    s.push(30);

    cout << "Top element: " << s.peek() << endl; 

    // s.pop();
    cout << "Top element after pop: " << s.peek() << endl; 

    return 0;
}