#include<iostream>
using namespace std;

int main()
{
    int a, b, max;

    cout << "Enter two integers: ";
    cin >> a >> b;


    max = (a > b) ? a : b;

    cout << "Maximum = " << max << endl;

    return 0;
}