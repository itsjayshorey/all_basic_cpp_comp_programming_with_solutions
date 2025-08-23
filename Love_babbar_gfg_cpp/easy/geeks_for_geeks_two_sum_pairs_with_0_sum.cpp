// User function template for C++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        int left = 0;
        int right = arr.size()-1;
        while(right>left)
        {
            if((arr[right]+arr[left])==0)
            {
                ans.push_back({arr[left],arr[right]});
                while(arr[right]==arr[right-1])
                {
                    right--;
                }
                while(arr[left]==arr[left-1])
                {
                    left++;
                }
                right--;
                left++;
            }
            if((arr[right]+arr[left])>0)
            {
                right--;
            }
            if((arr[right]+arr[left])<0)
            {
                left++;
            }
        }
        return ans;
    }
};