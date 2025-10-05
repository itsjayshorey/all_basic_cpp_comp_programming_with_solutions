#include <climits>
#include <iostream>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long long ans = 0;
        bool sign = true;
        long long x2 = x;
        if(x<0)
        {
            sign = false;
            x2 = 1LL*-1*x;
        }

        // x2 = abs(x);
        // x= abs(x);
        while(x2>0)
        {
            ans= ans*10+x2%10;
            x2=x2/10;
        }
        if(ans>=INT_MAX || ans<=INT_MIN)
        {
            return 0;
        }
        if(!sign)
        {
            ans*=-1;
        }
        return ans;
    }
};