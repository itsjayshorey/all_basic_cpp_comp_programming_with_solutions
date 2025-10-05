#include <vector>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<bool> numi(n+1,true);
        for(int i = 0; i < n ; i++)
        {
            numi[nums[i]] = false;
        }
        for(int i =0 ; i <= n; i++)
        {
            if(numi[i])return i;
        }
        return -1;
    }
};