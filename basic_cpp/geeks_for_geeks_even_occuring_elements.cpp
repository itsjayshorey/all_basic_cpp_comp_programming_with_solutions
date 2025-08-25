#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> findEvenOccurrences(vector<int>& arr) {
        // code here
        unordered_map<int,int> col;
        vector<int> ans;
        for(int i = 0;i<arr.size();i++)
        {
            col[arr[i]]++;
        }
        // for(auto it = col.begin(); it!=col.end(); ++it)
        // {
        //     if((it->second)%2==0)
        //     {
        //         ans.push_back(it->first);
        //     }
        // }
        for(int i = 0 ; i<arr.size() ; i++)
        {
            if(col[arr[i]]%2==0)
            {
                col[arr[i]]=1;
                ans.push_back(arr[i]);
            }
        }
        if(ans.size()==0)
        {
            ans.push_back(-1);
            return ans;
        }
        return ans;
    }
};
