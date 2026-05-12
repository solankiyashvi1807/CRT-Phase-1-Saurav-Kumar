 #include<iostream>
 using namespace std;

 void Insertion_sort(int arr[], int n)
 { 
    for ( int i = 1, i < n; i++)

    [
        int key = nums[i];
        int j = i - 1;
        while ( j >= 0 && nums[j] > key)
        { nums[j + 1] = nums [j];
        j --;
    }

    nums[j + 1] = key;
    ]
 }
   int main()
   { 

int arr[] = {7,6,5,4,3,2,1};
int n = sizeof(arr) / sizeof(arr)[0];

   }