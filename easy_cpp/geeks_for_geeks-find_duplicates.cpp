#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        map<int,int> mp;
        for(int i = 0; i<arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        vector<int> ans;
        for(auto it = mp.begin(); it!=mp.end(); it++)
        {
            if(it->second==2)
            {
                ans.push_back(it->first);
            }
        }
        return ans;
    }
};//find duplicates easy