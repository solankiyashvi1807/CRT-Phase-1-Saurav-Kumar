#include<iostream>
using namespace std;

int main()
{
    int a, b;
    char op;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch(op)
    {
        case '+':
            cout << "Result: " << a + b << endl;
            break;

        case '-':
            cout << "Result: " << a - b << endl;
            break;

        case '*':
            cout << "Result: " << a * b << endl;
            break;

        case '/':
            if(b == 0)
                cout << "Division by zero not allowed" << endl;
            else
                cout << "Result: " << a / b << endl;
            break;

        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}