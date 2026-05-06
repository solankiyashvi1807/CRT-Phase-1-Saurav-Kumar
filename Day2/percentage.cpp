#include<iostream>
using namespace std;

int main()
{
    int percentage;

    cout << "Enter percentage (0-100): ";
    cin >> percentage;

    if(percentage >= 90 && percentage <= 100)
    {
        cout << "Grade: A" << endl;
    }
    else if(percentage >= 80)
    {
        cout << "Grade: B" << endl;
    }
    else if(percentage >= 70)
    {
        cout << "Grade: C" << endl;
    }
    else if(percentage >= 60)
    {
        cout << "Grade: D" << endl;
    }
    else if(percentage >= 0)
    {
        cout << "Grade: Fail" << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }

    return 0;
}