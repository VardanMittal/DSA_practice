#include<bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int ans = 0;
        int i = 0, j = 1;
        while (j < nums.size())
        {
            if (nums[i] == nums[j])
            {
                nums[j] = INT_MAX;
                j++;
                ans++;
            }
            else
            {
                i = j;
                j++;
            }
        }
        sort(nums.begin(), nums.end());
        return (nums.size() - ans);
    }
};

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int ans = 1;
        int i = 0, j = 1;
        while (j < nums.size())
        {
            if (nums[i] == nums[j])
            {
                j++;
            }
            else
            {
                swap(nums[i + 1], nums[j]);
                ans++;
                i++;
                j++;
            }
        }
        return ans;
    }
};