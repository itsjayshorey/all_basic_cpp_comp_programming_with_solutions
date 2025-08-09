#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
class Solution {
  public:
    int minDiff(vector<int>& arr) {
        // code here
        int sz = arr.size();
        sort(arr.begin(),arr.end());
        int diff = 100000000;
        int curr_diff;
        for(int i = 0; i<sz-1;i++)
        {
            curr_diff = (arr[i+1]-arr[i]);
            if(curr_diff<diff)
            {
                diff = curr_diff;
            }
        }
        return diff;
    }
};
