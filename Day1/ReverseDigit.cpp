#include<bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}
class Solution
{
public:
    int reverse(int x)
    {
        int mini = -2147483648;
        int maxi = 2147483647;

        int ans = 0;
        while (x != 0)
        {
            int digit = x % 10;
            if (ans > maxi / 10 || ans < mini / 10)
            {
                return 0;
            }
            ans = ans * 10 + digit;
            x /= 10;
        }
        return ans;
    }
};