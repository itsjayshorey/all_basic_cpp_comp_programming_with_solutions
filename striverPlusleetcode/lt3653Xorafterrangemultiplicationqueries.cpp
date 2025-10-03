#include <vector>
using namespace std;
class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int numq = queries.size();
        for(int i = 0; i <numq; i++)
        {
            int l = queries[i][0];
            int r = queries[i][1];
            int k = queries[i][2];
            int v = queries[i][3];
            for(int idx = l; idx<=r; idx+=k)
            {
                nums[idx] = (1LL*nums[idx]*v)%(1000000007);
            }
        }
        int ans = nums[0];
        for(int i = 1; i <nums.size(); i++)
        {
            ans = ans^nums[i];
        }
        return ans;
    }
};