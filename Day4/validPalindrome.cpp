#include<bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}
class Solution
{
private:
    bool check(int i, vector<char> &s)
    {
        int n = s.size();
        if (i >= n / 2)
        {
            return true;
        }
        if (s[i] != s[n - i - 1])
        {
            return false;
        }
        return check(++i, s);
    }

public:
    bool isPalindrome(string s)
    {
        vector<char> new_s;
        for (int i = 0; i < s.length(); i++)
        {
            if (isalnum(s[i]))
            {
                new_s.push_back(tolower(s[i]));
            }
        }
        return check(0, new_s);
    }
};