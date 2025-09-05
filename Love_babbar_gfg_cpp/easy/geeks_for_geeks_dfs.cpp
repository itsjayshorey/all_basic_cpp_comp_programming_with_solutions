#include<iostream>
#include<vector>
#include<set>
#include<stack>
using namespace std;

class Solution {
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        set<int> visited;
        vector<int> ans;
        stack<int> stk;
        stk.push(0);
        int curr;
        int sz;
        while(!stk.empty())
        {
            curr = stk.top();
            stk.pop();
            if(visited.find(curr) == visited.end())
            {
                ans.push_back(curr);
                visited.insert(curr);
                sz = adj[curr].size();
                for(int i = 0;i<sz ; i++)
                {
                    stk.push(adj[curr][sz-i-1]);
                }
            }
        }
        return ans;
    }
};