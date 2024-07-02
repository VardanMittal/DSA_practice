#include<bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            int val = target - nums[i];
            if (m.find(val) != m.end())
            {
                ans.push_back(i);
                ans.push_back(m[val]);
                break;
            }
            m[nums[i]] = i;
        }
        return ans;
    }
};