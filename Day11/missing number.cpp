#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int Missing_Number(vector<int>& nums)
    {
        int n = nums.size();

        int total_sum = n * (n + 1) / 2;
        int curr_sum = 0;

        for (int i = 0; i < n; i++)
        {
            curr_sum += nums[i];
        }

        return total_sum - curr_sum;
    }
};

int main()
{
    vector<int> nums = {0, 1, 2, 3, 4, 5};

    Solution s1;

    cout << s1.Missing_Number(nums) << endl;

    return 0;
}