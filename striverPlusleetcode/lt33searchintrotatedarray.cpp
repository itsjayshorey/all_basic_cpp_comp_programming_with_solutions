#include <vector>
using namespace std;
class Solution {
public:
    int bins(vector<int>& nums, int &target , int i, int j)
    {
        if(i>j)return-1;
        int mid = (i+j)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        if(nums[mid]>=nums[i])
        {
            if(nums[i]<=target && nums[mid]>target)return bins(nums,target,i,mid-1);
            else return bins(nums,target,mid+1,j);
        }
        else
        {
            if(nums[j]>=target && nums[mid]<target)return bins(nums,target,mid+1,j);
            else return bins(nums,target,i,mid-1);
        }
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        return bins(nums,target,0,n-1);
    }
};