#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void duplicateZeros(vector<int> &arr)
    {
        vector<int> ans;
        for (int i = 0; i < arr.size(); i++)
        {
            ans.push_back(arr[i]);
            if (arr[i] == 0)
            {
                ans.push_back(0);
            }
        }
        for (int i = 0; i < arr.size(); i++)
        {
            arr[i] = ans[i];
        }
    }
};
int main()
{
    return 0;
}