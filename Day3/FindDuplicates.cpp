#include<bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}

int findDuplicate(vector<int> &arr)
{
    int ans = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
