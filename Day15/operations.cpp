#include<iostream>
using namespace std;

class Stack
{
private:
    int top;
    int arr[50];

public:

    Stack()
    {
        top = -1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == 49;
    }

    int size()
    {
        return top + 1;
    }
};

int main()
{
    Stack s;

    cout << "isEmpty: " << s.isEmpty() << endl;
    cout << "isFull: " << s.isFull() << endl;
    cout << "Size: " << s.size() << endl;

    return 0;
}