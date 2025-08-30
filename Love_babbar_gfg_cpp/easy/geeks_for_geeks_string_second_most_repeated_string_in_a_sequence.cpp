#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

class Solution {
  public:
    string secFrequent(string arr[], int n) {
        // code here.
        map<string,int> mp;
        for(int i = 0; i<n ; i++)
        {
            mp[arr[i]]++;
        }
        int max = INT32_MIN;
        int max2 = INT32_MIN;
        string ans = "";
        string prev = "";
        for(auto it = mp.begin();it!=mp.end();it++)
        {
            if(it->second > max)
            {
                prev = ans;
                max2 = max;
                max = it->second;
                ans = it->first;
            }
            else if(((it->second)<max) && ((it->second)>max2))
            {
                max2 = it->second;
                prev = it->first;
            }
            
        }
        return prev;
    }
};