#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> subseq(vector<int>& nums, int i)
    {
        vector<int> ans;
        int cnt = 0;
        while(i>0)
        {
            if((i & 1)==1)
            {
                ans.push_back(nums[cnt]);
            }
            i=i>>1;
            cnt++;
        }
        return ans;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int n1 = n;
        vector<vector<int>> ans;
        int maxi = 1;
        while(n>0)
        {
            maxi = maxi<<1;
            n--;
        }
        for(int i = 0 ; i < maxi ; i++)
        {
            vector<int> temp = subseq(nums,i);
            ans.push_back(temp);
        }
        return ans;
    }
};