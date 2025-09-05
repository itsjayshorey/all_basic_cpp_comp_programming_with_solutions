// User function Template for C++
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
  public:
    void rec(vector<vector<string>>& list,vector<vector<string>>& ans,vector<string> curr,int M, int N, int i)
    {
        vector<string> cu = curr;
        if(i==M)
        {
            ans.push_back(curr);
            return;
        }
        for(int k = 0 ; k<N ; k++)
        {
            cu.push_back(list[i][k]);
            rec(list,ans,cu,M,N,i+1);
            cu = curr;
        }
    }
    vector<vector<string>> sentences(vector<vector<string>>& list) {
        // Write your code here
        vector<vector<string>> ans;
        vector<string> a;
        int M = list.size();
        int N = list[0].size();
        rec(list,ans,a,M,N,0);
        return ans;
    }
};
