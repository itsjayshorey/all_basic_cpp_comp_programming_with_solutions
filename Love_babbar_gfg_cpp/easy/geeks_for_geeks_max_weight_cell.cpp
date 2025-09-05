// User function Template for C++
#include<iostream>
#include<map>
#include<vector>
using namespace std;

class Solution {
  public:
    int maxWeightCell(vector<int> &exits) {
        // code here
        map<int,int> mp;
        for(int i = 0; i<exits.size() ; i++)
        {
            mp[exits[i]] +=i;
        }
        int maxi = INT_MIN;
        int ans = 0;
        for(auto it = mp.begin(); it!=mp.end(); it++)
        {
            if((it->second)>=maxi)
            {
                if(it->first>=0)
                {
                    maxi = it->second;
                    ans = it->first;
                }
            }
        }
        return ans;
        // return mp[2];
    }
};