#include<iostream>
#include<vector>
#include<unordered_map>
#include<cstdlib>
using namespace std;
class Solution {
public:
    unordered_map<int,vector<int>> mapi;
    Solution(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0 ; i <n ; i ++)
            {
                mapi[nums[i]].push_back(i);
            }
        srand(time(0));
    }
    
    int pick(int target) {
        int index = rand()%mapi[target].size();
        return mapi[target][index];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */