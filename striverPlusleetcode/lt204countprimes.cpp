#include <vector>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {
       vector<bool>sieve (n,true);
       for(int i = 2 ; i < n; i++)
       {
        if(sieve[i])
        {
            for(long j = 1LL*i*i ; j <n; j+=i )
            {
                sieve[j] = false;
            }
        }
       } 
       int ans = 0;
       for(int i = 2; i< n ; i++)
       {
        if(sieve[i])
        {
            ans++;
        }
       }
       return ans;
    }
};