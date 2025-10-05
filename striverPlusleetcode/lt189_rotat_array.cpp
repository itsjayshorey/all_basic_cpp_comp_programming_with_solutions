#include <vector>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        //index of array
        k = k%n;
        vector<int> tp;
        for(int i = k ; i >0 ; i--)
        {
            tp.push_back(nums[n-i]);
        }
        nums.erase(nums.begin()+n-k,nums.end());
        nums.insert(nums.begin(),tp.begin(),tp.end());
    }
};