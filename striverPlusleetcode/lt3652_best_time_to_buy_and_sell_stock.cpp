#include <vector>
using namespace std;
class Solution {
public:
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        long long ans=0;
        int n = strategy.size();
        strategy.push_back(0);
        prices.push_back(0);
        for(int i = 0 ; i < n ; i++)
        {
            ans+= strategy[i]*prices[i];
        }
        int ptr1 = 0;
        int ptr2 = k-1;
        int mid = k/2-1;
        long long curr = 0;
        long long maxi = 0;
        for(int i = mid+1; i<k ; i++)
        {
            maxi+= prices[i];
        }
        for(int i = 0; i<=ptr2; i++)
        {
            curr+=strategy[i]*prices[i];
        }
        long long diff = 0;
        long long op = 0;
        long long ob = 0;
        if(curr<maxi)
        {
            if(maxi-curr>diff)
            {
                op = maxi;
                ob = curr;
                diff = maxi-curr;
            }
        }
        while(ptr2<n-1)
        {
            curr-=strategy[ptr1]*prices[ptr1];
            ptr1++;
            ptr2++;
            curr+=strategy[ptr2]*prices[ptr2];
            maxi-=prices[ptr2-k/2];
            // mid++;
            maxi+=prices[ptr2];
            if(maxi-curr>diff)
            {
                op = maxi;
                ob = curr;
                diff = maxi-curr;
            }
        }
        // ans+=diff;
        return ans+diff;
    }
};