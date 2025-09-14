#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        int n =arr.size();
        sort(arr.begin(),arr.end());
        int mini,maxi;
        int ans = arr[n-1] - arr[0];
        for(int i = 0; i<n-1 ; i++)
        {
            mini = min(arr[0]+k,arr[i+1]-k);
            maxi = max(arr[n-1]-k,arr[i]+k);
            if(mini<0)
            {
                continue;
            }
            ans = min(ans,abs(maxi-mini));
        }
        return ans;
    }
};//minimize the heights 2