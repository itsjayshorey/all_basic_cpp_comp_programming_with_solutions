#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int> ans;
        int sz = arr.size();
        int max = -1000000;
        for(int i = sz-1; i>=0; i--)
        {
            if(arr[i]>=max)
            {
                max = arr[i];
                ans.push_back(max);
            }
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};