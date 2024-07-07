#include<bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n = nums1.size(), m = nums2.size();
        int i = 0, j = 0;
        vector<int> ans;

        while (i < n && j < m)
        {
            if (nums1[i] == nums2[j])
            {
                if (ans.empty() || ans[ans.size() - 1] != nums1[i])
                {
                    ans.push_back(nums1[i]);
                }
                i++, j++;
            }
            else if (nums1[i] > nums2[j])
                j++;
            else
                i++;
        }
        return ans;
    }
};