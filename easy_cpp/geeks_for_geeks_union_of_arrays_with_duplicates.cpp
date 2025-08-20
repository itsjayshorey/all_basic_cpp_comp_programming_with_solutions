#include<iostream>
#include<set>
#include<vector>
using namespace std;
class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int> anset;
        for(int i = 0;i<a.size();i++)
        {
            anset.insert(a[i]);
        }
        for(int i = 0;i<b.size();i++)
        {
            anset.insert(b[i]);
        }
        vector<int> ans;
        for(int num : anset)
        {
            ans.push_back(num);
        }
        return ans;
    }
};