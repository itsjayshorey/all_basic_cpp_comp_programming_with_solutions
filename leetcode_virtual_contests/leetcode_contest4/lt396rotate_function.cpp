#include<iostream>
#include<vector>
#include<climits>
#include<cstdlib>
using namespace std;
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int refsum = 0;
        int ans = INT_MIN;
        for(int i = 0 ;i<n; i++)
            {
                sum+=nums[i];
                refsum += i*nums[i];
            }
        ans = max(refsum,ans);
        for(int i = 1; i <n;i++)
            {
                refsum = refsum + sum-n*(nums[n-i]);
                ans = max(refsum,ans);
            }
        return ans;
    }
};