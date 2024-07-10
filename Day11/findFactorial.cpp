//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
private:
    void factorial(long long temp, long long fact, long long n, vector<long long> &v)
    {
        if (fact > n)
        {
            return;
        }
        fact *= temp;
        if (fact <= n)
        {
            v.push_back(fact);
        }
        factorial(++temp, fact, n, v);
    }

public:
    vector<long long> factorialNumbers(long long n)
    {
        vector<long long> ans;
        factorial(1, 1, n, ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends