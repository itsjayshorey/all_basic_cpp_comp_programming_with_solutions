#include <vector>
using namespace std;
class Solution {
public:
    int bins(vector<int>& nums,int &target, int i , int j )
    {
        if(i>j)
        {
            return i;
        }
        int mid = (i+j)/2;
        if(nums[mid]==target)
        {
            return mid;
        }
        if(nums[mid]>target)
        {
            return bins(nums,target,i,mid-1);
        }
        else
        {
            return bins(nums,target,mid+1,j);
        }
    }
    int searchInsert(vector<int>& nums, int target) {
        int n  = nums.size();
        return bins(nums,target,0,n-1);
    }
};