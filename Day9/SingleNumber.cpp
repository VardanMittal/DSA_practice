#include<bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans ^= nums[i];
        }
        return ans;
    }
};