#include<bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}

class Solution{
public:
    int lenOfLongSubarr(int A[], int N, int K){
        int i = 0, j = 0;
        int sum = 0, ml = 0;
        while(j < N){
            sum += A[j];
            if(sum == K){
                ml = max(ml, j - i);
            }
            else if(sum > K){
                sum -= A[i];
                i++;
                if(sum == K){
                    ml = max(ml, j - i);
                }
            }
        }
        return ml;
    }
};