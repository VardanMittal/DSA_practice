#include<bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}
class Solution
{
public:
    int passThePillow(int n, int time)
    {
        int a = time / (n - 1);
        int rem = time % (n - 1);
        if (a % 2 != 0)
        {
            return n - rem;
        }
        return 1 + rem;
    }
};