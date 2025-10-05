#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,bool> mapi;
        int n = nums.size();
        int ptr = 0;
        for(int i = 0; i < nums.size();i++)
        {
            if(mapi.find(nums[i])==mapi.end())
            {
                mapi[nums[i]] = true;
                nums[ptr] = nums[i];
                ptr++;
            }
            else
            {
                n--;
            }
        }
        return n;
    }
};