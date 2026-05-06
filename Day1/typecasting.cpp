#include<iostream>
using namespace std;

int g;

int main()
{
    int userInput;
    double result;

    g = 200;

    cout << "Enter an integer: ";
    cin >> userInput;

    result = (double)g / userInput;

    cout << "Result: " << result << endl;

    return 0;
}