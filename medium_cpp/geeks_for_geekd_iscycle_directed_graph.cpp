#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    bool dfs(vector<vector<int>> &adj, vector<bool> &visited, vector<bool> &pathvisited, int node)
    {
        visited[node] = true;
        if(pathvisited[node])
        {
            return true;
        }
        pathvisited[node] = true;
        for(int i = 0 ; i< adj[node].size(); i++)
        {
            if(dfs(adj,visited,pathvisited,adj[node][i])) return true;
        }
        pathvisited[node] = false;
        return false;
    }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<vector<int>> adj(V);
        for(int i = 0; i<edges.size(); i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        vector<bool> visited(V,false);
        vector<bool> pathvisited(V,false);
        for(int i = 0; i<V ; i++)
        {
            if(!visited[i])
            {
                if(dfs(adj,visited,pathvisited, i)==true) return true;
            }
        }
        return false;
    }
};