//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int evenlyDivides(int N)
    {
        int cnt = 0;
        int m = N;
        while (m > 0)
        {
            int digit = m % 10;
            if (digit != 0)
            {
                if (N % digit == 0)
                {
                    cnt++;
                }
            }
            m = m / 10;
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0;
}
// } Driver Code Ends