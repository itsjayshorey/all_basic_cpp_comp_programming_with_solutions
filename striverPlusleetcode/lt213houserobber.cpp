#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int fndmxwithoutfirst(vector<int>& nums, vector<int>& dp, int n)
    {
        if(n<1) return 0;
        if(dp[n]!=-1) return dp[n];
        dp[n] = max(fndmxwithoutfirst(nums,dp,n-1),fndmxwithoutfirst(nums,dp,n-2)+nums[n]);
        return dp[n];
    }
    int fndmxwithoutlast(vector<int>& nums, vector<int>& dp, int n)
    {
        if(n<0) return 0;
        if(dp[n]!=-1) return dp[n];
        dp[n] = max(fndmxwithoutlast(nums,dp,n-1),fndmxwithoutlast(nums,dp,n-2)+nums[n]);
        return dp[n];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return nums[0];
        vector<int> dp(n,-1);
        int withoutf = fndmxwithoutfirst(nums,dp,n-1);
        vector<int> dp2(n,-1);
        int withoutl = fndmxwithoutlast(nums,dp2,n-2);
        return max(withoutf,withoutl);
    }
};