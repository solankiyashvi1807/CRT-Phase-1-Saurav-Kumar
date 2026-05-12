#include<iostream>
using namespace std;

int sum(int n)
{
    // Base case
    if(n == 1)
        return 1;

    // Recursive call
    return n + sum(n - 1);
}

int main()
{
    int result = sum(5);

    cout << "Sum = " << result << endl;

    return 0;
}