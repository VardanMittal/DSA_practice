#include<bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int lenOfLongSubarr(int A[], int N, int K)
    {
        int maxlen = 0, sum = 0;
        map<int, int> mp;
        for (int i = 0; i < N; i++)
        {
            sum += A[i];
            if (sum == K)
            {
                maxlen = max(maxlen, i + 1);
            }
            int rem = sum - K;
            if (mp.find(rem) != mp.end())
            {
                maxlen = max(maxlen, i - mp[rem]);
            }
            if (mp.find(sum) == mp.end())
            {
                mp[sum] = i;
            }
        }
        return maxlen;
    }
};

//{ Driver Code Starts.

int main()
{
    // code

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.lenOfLongSubarr(a, n, k) << endl;
    }

    return 0;
}
// } Driver Code Ends