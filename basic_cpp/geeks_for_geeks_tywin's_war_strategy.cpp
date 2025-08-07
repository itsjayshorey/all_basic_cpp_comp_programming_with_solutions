#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
  public:
    int minSoldiers(vector<int>& arr, int k) {
        // code here
        int sz = arr.size();
        for(int i = 0;i<sz;i++)
        {
            arr[i] = (k-arr[i]%k)%k;
        }
        sort(arr.begin(),arr.end());
        int ans =0;
        for(int i=0;i<(sz+1)/2;i++)
        {
            ans = ans + arr[i];
        }
        return ans;
    }
};