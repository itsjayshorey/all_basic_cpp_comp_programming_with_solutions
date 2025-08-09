
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    vector<int> Rearrange(vector<int> arr) {
        // code here
        int sz = arr.size();
        sort(arr.begin(),arr.end());
        int temp;
        int start = 0;
        int end = sz-1;
        vector<int> ans;
        while(start<end)
        {
            ans.push_back(arr[start++]);
            ans.push_back(arr[end--]);
        }
        if(start == end)
        {
            ans.push_back(arr[end]);
        }
        return ans;
    }
};