#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        // sort(a.begin(),a.end());
        // sort(b.begin(),b.end());
        // if(a==b)
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }
        unordered_map<int,int> map;
        int sz = a.size();
        for(int i = 0;i<sz;i++)
        {
            map[a[i]]++;
        }
        for(int i = 0;i<b.size();i++)
        {
            if(map.find(b[i])==map.end())
            {
                return false;
            }
            if(map[b[i]]==0)
            {
                return false;
            }
            map[b[i]]--;
        }
        return true;
    }
};