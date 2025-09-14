#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        if(arr.size()==0)
        {
            return 0;
        }
        int maxi = INT_MIN;
        int curr = 0;
        for(int i = 0;i < arr.size() ; i++)
        {
            curr+=arr[i];
            maxi = max(maxi,curr);
            if(curr<0)
            {
                curr=0;
            }
        }
        return maxi;
    }
};//kadane