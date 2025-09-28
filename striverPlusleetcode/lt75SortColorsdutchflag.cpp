#include <vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int st = 0;
        int mid =0;
        int end = nums.size()-1;
        while(mid<=end)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[st]);
                st++;
                mid++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else if(nums[mid]==2)
            {
                swap(nums[mid],nums[end]);
                end--;
            }
        }
    }
};