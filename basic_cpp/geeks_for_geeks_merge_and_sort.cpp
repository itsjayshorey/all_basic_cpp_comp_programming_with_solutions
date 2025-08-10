#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) {
        //  code here
        arr1.insert(arr1.end(),arr2.begin(),arr2.end());
        sort(arr1.begin(),arr1.end());
        int sz = arr1.size();
        vector<int> ans;
        int i = 0;
        int curr = 0;
        while(sz>i)
        {
            curr = arr1[i];
            ans.push_back(curr);
            i++;
            while(curr == arr1[i])
            {
                i++;
            }
        }
        return ans;
    }
};