// User function Template for C++
#include <vector>
#include <iostream>
using namespace std;
class Solution {
  public:
    void dfs(vector<vector<int>> &adj, vector<bool> &visited, int node)
    {
        visited[node] = true;
        for(int i = 0; i<adj[node].size(); i++)
        {
            if(!visited[adj[node][i]])
            {
                dfs(adj,visited,adj[node][i]);
            }
        }
        return;
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<vector<int>> adj_m(V+1);
        for(int i = 0; i<adj.size(); i++)
        {
            for(int j = 0; j<adj.size(); j++)
            {
                if(adj[i][j]==1)
                {
                    adj_m[i+1].push_back(j+1);
                    adj_m[j+1].push_back(i+1);
                }
            }
        }
        vector<bool> visited(V+1,false);
        int ans = 0;
        for(int i = 1; i<=V; i++)
        {
            if(!visited[i])
            {
                ans++;
                dfs(adj_m, visited,i);
            }
        }
        return ans;
    }
};