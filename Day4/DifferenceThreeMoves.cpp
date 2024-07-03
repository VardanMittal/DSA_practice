#include<bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}
class Solution
{
public:
    int minDifference(vector<int> &nums)
    {
        int n = nums.size();
        if (n <= 4)
        {
            return 0;
        }
        sort(nums.begin(), nums.end());
        int ans = INT_MAX;
        ans = min(ans, nums[n - 1] - nums[3]);

        // last three changed
        ans = min(ans, nums[n - 4] - nums[0]);

        // 2 left 1 right changed
        ans = min(ans, nums[n - 2] - nums[2]);
        // 2 right and 1 left changed
        ans = min(ans, nums[n - 3] - nums[1]);

        return ans;
    }
};