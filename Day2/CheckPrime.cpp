//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int isPrime(int N)
    {
        int cnt = 0;
        for (int i = 1; i <= sqrt(N); i++)
        {
            if (N % i == 0)
            {
                cnt++;
                if (i != (N / i))
                {
                    cnt++;
                }
            }
        }
        if (cnt == 2)
        {
            return 1;
        }
        return 0;
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
        cout << ob.isPrime(N) << endl;
    }
    return 0;
}
// } Driver Code Ends