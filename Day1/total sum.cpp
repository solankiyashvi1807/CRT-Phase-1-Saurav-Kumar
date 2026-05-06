#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    int sum;
    double average;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    sum = a + b + c;

    // No typecasting used
    average = sum / 3.0;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}