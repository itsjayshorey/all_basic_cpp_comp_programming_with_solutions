// User function template for C++
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
  public:
    // calculate the maximum sum with out adjacent
    int findmx(vector<int>& arr, vector<int>& dp,int n)
    {
        if(n < 0)return 0;
        if(dp[n]!=-1)return dp[n];
        dp[n] = max(findmx(arr,dp,n-1),(findmx(arr,dp,n-2)+arr[n]));
        return dp[n];
    }
    int findMaxSum(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> dp(n,-1);
        return findmx(arr,dp,n-1);
    }
};