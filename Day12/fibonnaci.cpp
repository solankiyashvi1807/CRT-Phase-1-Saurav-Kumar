#include<iostream>
using namespace std;

int fibonnaci(int n)
{
    if ( n == 0)
    return 0;
     if ( n == 1  || n == 2)
     return 1;
        return fibonnaci(n - 1) + fibonnaci(n - 2); // recursive call

}

int main() 
{ 
    int n;
    cin >> n;
    cout << "fibonnaci = " << fibonnaci(n) << endl;


    return 0;
}
 