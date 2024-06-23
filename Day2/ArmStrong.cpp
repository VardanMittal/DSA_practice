#include<bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}
class Solution {
  public:
    string armstrongNumber(int n) {
        int dup = n;
        int sum = 0;
        while(dup != 0){
            int digit = dup % 10;
            sum += pow(digit, 3);
            dup /= 10;
        }
        if(sum == n){
            return "true";
        }
        return "false";
    }
};