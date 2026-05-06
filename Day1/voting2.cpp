#include<iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter age: ";
    cin >> age;

    if(age >= 0)
    {
        if(age <= 17)
        {
            cout << "Child, not eligible to vote" << endl;
        }
        else
        {
            if(age < 100)
            {
                if(age <= 79)
                {
                    cout << "Eligible to vote" << endl;
                }
                else
                {
                    cout << "Eligible to vote and senior citizen" << endl;
                }
            }
            else
            {
                cout << "Eligible to vote in century category" << endl;
            }
        }
    }
    else
    {
        cout << "Invalid age" << endl;
    }

    return 0;
}