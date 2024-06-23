#include<bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        int m = x;
        long ans = 0;
        while (m > 0)
        {
            int digit = m % 10;
            ans = ans * 10 + digit;
            m /= 10;
        }
        if (ans == x)
        {
            return true;
        }
        return false;
    }
};