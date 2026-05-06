#include<iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two integers (a and b): ";
    cin >> a >> b;

    int multiply = a << 2;

    int divide = b >> 2;

    cout << "a * 4 = " << multiply << endl;
    cout << "b / 4 = " << divide << endl;

    return 0;
}