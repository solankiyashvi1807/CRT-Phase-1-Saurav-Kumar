#include<iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    bool isEquilateral = (a == b) && (b == c);

    cout << isEquilateral << endl;

    return 0;
}