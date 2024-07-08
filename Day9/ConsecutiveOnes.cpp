#include<bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int currMax = 0, maxi = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                currMax = 0;
            }
            else
            {
                currMax++;
            }

            if (maxi < currMax)
            {
                maxi = currMax;
            }
        }
        return maxi;
    }
};