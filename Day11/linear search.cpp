#include <iostream>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int Linear_Search(int nums[], int n, int target)
    {
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == target)
            {
                return i;
            }
        }

        return -1;
    }
};

int main()
{
    int nums[5] = {1, 2, 3, 4, 5};
    int n = sizeof(nums) / sizeof(nums[0]);

    Solution s1;

    int result = s1.Linear_Search(nums, n, 3);

    cout << result << endl;

    return 0;
}