#include<iostream>
using namespace std;

int main()
{
    const int username = 1234;
    const int pass = 5678;

    int inputuser, inputpass;
    cin >> inputuser >> inputpass;

    bool istrue = (username == inputuser) && (pass == inputpass);
    if(istrue)
    cout << "Login pass" << istrue << endl;
     else cout << "login fail" << istrue << endl;

     return 0;
}