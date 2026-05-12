#include<iostream>
using namespace std;

void Selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minimum = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minimum])
            {
                minimum = j;
            }
        }

        swap(arr[minimum], arr[i]);
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    Selection_sort(arr, n);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}