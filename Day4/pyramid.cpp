#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int stars = 1;

    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int k = 1; k <= stars; k++)
            cout << "*";

        stars += 2;  // increase by 2 each row

        cout << endl;
    }

    return 0;
}