#include<iostream>
using namespace std;

int total_sum(int n)
{
    if ( n == 0)
    return 0;
    int sum = n%10; // last digit of n  
    return sum + total_sum(n/10); // recursive call
}
 int main()
 {
    int n;
    cin >> n;
    cout << " Total_sum=" << total_sum(n) << endl;
    return 0;
 }    