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
        int maxi = 0, currMax = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (currMax > maxi)
            {
                maxi = currMax;
            }
            currMax++;
            if (nums[i] != 1)
            {
                currMax = 0;
            }
        }
        if (currMax > maxi)
        {
            maxi = currMax;
        }
        return maxi;
    }
};