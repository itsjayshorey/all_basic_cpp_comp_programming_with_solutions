#include <vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        vector<int> zer;
        for(int i = 0 ; i<nums.size(); i++)
        {
            if(nums[i]==0)
            {
                zer.push_back(0);
            }
            else
            {
                ans.push_back(nums[i]);
            }
        }
        ans.insert(ans.end(),zer.begin(),zer.end());
        nums = ans;
    }
};