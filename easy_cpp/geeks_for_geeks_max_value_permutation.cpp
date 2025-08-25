#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
    int maxValue(vector<int> &arr) {
        // Complete the function
        sort(arr.begin(),arr.end());
        long long ans = 0;
        for(int i = 0 ; i<arr.size() ; i++)
        {
            ans  = (ans + 1ll*arr[i]*i)%1000000007;
        }
        return int(ans);
    }
};