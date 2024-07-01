#include<bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}

class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        unordered_map<int, int> m;
        unordered_map<int, bool> m2;
        for (int i = 0; i < arr.size(); i++)
        {
            m[arr[i]]++;
        }
        for (auto i : m)
        {
            if (m2[i.second] == false)
            {
                m2[i.second] = true;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};