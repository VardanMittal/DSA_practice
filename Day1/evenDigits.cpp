#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    bool checkeven(int n)
    {
        int cnt = 0;
        while (n != 0)
        {
            int digit = n % 10;
            cnt++;
            n = n / 10;
        }
        if (cnt % 2 != 0)
        {
            return false;
        }
        return true;
    }

public:
    int findNumbers(vector<int> &nums)
    {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (checkeven(nums[i]))
            {
                cnt++;
            }
        }
        return cnt;
    }
};
int main()
{
    return 0;
}