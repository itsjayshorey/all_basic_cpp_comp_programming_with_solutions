#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
        int sz = arr.size();
        sort(arr.begin(),arr.end());
        int start = 0;
        int end = sz - 1;
        vector<int> ans;
        while(end>start)
        {
            ans.push_back(arr[end--]);
            ans.push_back(arr[start++]);
        }
        if(end == start)
        {
            ans.push_back(arr[end]);
        }
        return ans;
    }
};
