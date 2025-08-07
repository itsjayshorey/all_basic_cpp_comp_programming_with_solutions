#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    // Function to find the minimum value required to balance the array.
    int minValueToBalance(vector<int> &arr) {
        // code here
        int left = 0;
        int right = 0;
        int sz = arr.size();
        for(int i=0;i<sz/2;i++)
        {
            left = left + arr[i];
            right = right + arr[sz-i-1];
        }
        if(right>left)
        {
            int ans = right - left;
            return ans;
        }
        else
        {
            int ans = left-right;
            return ans;
        }
    }
};
