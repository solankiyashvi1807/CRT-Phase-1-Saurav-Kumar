#include<iostream>
using namespace std;

int main()
{
    int arr[] = {7,6,5,4,3,2,1};
    int n = 7;

    for(int i = 0; i < n - 1; i++)
    {
        bool flag = false;

        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = true; // swap happened
            }
        }

        
        if(!flag) // No swap means array is already sorted
        {
            cout << "Array is already sorted" << endl;
            break;
        }
    }

    cout << "Sorted Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}