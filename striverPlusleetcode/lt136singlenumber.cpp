#include <vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int an = 0;
        for(int i = 0 ; i <nums.size(); i++)
        {
            an^=nums[i];
        }
        return an;
    }
};