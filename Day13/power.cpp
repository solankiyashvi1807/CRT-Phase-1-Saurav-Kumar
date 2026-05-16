#include<iostream>
using namespace std;

int fun(int n)
{
    if (n ==0)
    return false;
    if (n == 1)
    return true;

    return (n % 2 == 0) && fun (n/2);
}

int main()
{
    int n;
    cin >> n;
    cout << fun(n) << endl;
    return 0;
}