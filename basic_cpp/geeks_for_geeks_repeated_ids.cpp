// User function Template for C++
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;
class Solution {
  public:
    vector<int> uniqueId(vector<int>& arr) {
        // code
        unordered_map<int,int> check;
        vector<int> ans;
        for(int i = 0;i<arr.size();i++)
        {
            if(check[arr[i]]==0)
            {
                ans.push_back(arr[i]);
                check[arr[i]]++;
            }
        }
        return ans;
    }
};