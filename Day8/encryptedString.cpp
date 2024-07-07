#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string getEncryptedString(string s, int k)
    {
        string temp = "";
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            temp += s[(i + k) % n];
        }
        return temp;
    }
};

int main()
{
    return 0;
}