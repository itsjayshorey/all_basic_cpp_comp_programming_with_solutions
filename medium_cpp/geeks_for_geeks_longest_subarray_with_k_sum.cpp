#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        map<int,int> mp;
        mp[0] = -1;
        int sum = 0;
        int ans = 0;
        int n = arr.size();
        for(int i = 0; i<n ; i++)
        {
            sum+=arr[i];
            if(mp.find(sum)==mp.end())
            {
                mp[sum] = i;
            }
            if(mp.find((sum-k))!=mp.end())
            {
                ans = max(ans, i-mp[sum-k]);
            }
        }
        return ans;
    }
};//longest subarray with sum k medium