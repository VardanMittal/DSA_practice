#include<bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}
class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> sq;
        for (int i = 0; i < nums.size(); i++)
        {
            sq.push_back(pow(nums[i], 2));
        }
        sort(sq.begin(), sq.end());
        return sq;
    }
};