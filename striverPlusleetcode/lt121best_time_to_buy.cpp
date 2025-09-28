#include <vector>
#include <climits>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minb = INT_MAX;
        int max_aft = INT_MIN;
        int ans = INT_MIN;
        vector<int> minbef(n,0);
        // vector<int> maxaft(n,0);
        for(int i = 0; i<n;i++)
        {
            minb=min(prices[i],minb);
            minbef[i] = minb;
        }
        for(int i = n-1;i>0;i--)
        {
            max_aft = max(prices[i],max_aft);
            ans = max(ans,max_aft-minbef[i-1]);
        }
        if(ans<0)return 0;
        return ans;
    }
};


