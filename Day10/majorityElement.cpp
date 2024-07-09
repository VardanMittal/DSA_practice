#include<bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> m;
        int ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            m[nums[i]]++;
            if (m[nums[i]] > n / 2)
            {
                ans = nums[i];
            }
        }
        return ans;
    }
    int majorityBrute(vector<int> & nums){
        int n = nums.size();
        int ans=  0;
        for(int i = 0; i < n; i++){
            int cnt = 0;
            for(int j = 0; j < n; j++){
                if(nums[i] == nums[j])
                    cnt++;
                if(cnt > n / 2){
                    ans = nums[i];
                }
            }
        }
        return ans;
    }
};