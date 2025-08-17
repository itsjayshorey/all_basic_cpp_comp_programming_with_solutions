#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
  public:
    int lastSeenElement(vector<int>& arr) {
        // Complete the function
        unordered_map<int,int> set;
        for(int i = 0;i<arr.size();i++)
        {
            set[arr[i]] = i;
        }
        int max = arr.size();
        int ans;
        for(int i = 0;i<arr.size();i++)
        {
            if(set[arr[i]]<max)
            {
                ans = arr[i];
                max = set[arr[i]];
            }
        }
        return ans;
    }
};