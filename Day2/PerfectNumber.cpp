#include<bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}
class Solution
{
public:
    bool checkPerfectNumber(int num)
    {
        if (num == 1)
        {
            return false;
        }
        int sum = 0;
        for (int i = 1; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                if (i != (num / i) && (num / i) != num)
                {
                    sum = sum + i + (num / i);
                }
                else
                    sum += i;
            }
        }
        if (sum == num)
        {
            return true;
        }
        return false;
    }
};
class Solution
{
public:
    bool checkPerfectNumber(int num)
    {
        int sum = 0;
        for (int i = 1; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }
        if (sum == num)
        {
            return true;
        }
        return false;
    }
};