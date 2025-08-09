#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class Solution {
  public:
    int gcd(int a, int b)
    {
        if(a==0)
        {
            return b;
        }
        if(b==0)
        {
            return a;
        }
        if(a>b)
        {
            return gcd(a%b,b);
        }
        else
        {
            return gcd(a, b%a);
        }
    }
    int countCoPrime(const vector<int>& arr) {
        // code here
        int sz = arr.size();
        int ans = 0;
        int cur;
        for(int i = 0;i<sz-1;i++)
        {
            cur = gcd(arr[i],arr[i+1]);
            // cur = __gcd(arr[i],arr[i+1]);
            if(cur!=1)
            {
                ans++;
            }

        }
        return ans;
    }
};

