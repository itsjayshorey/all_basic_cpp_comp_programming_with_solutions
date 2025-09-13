#include <vector>
#include <map>
#include <iostream>
using namespace std;
class Solution {
  public:
    static bool dfscheck(vector<vector<int>> &adj, vector<bool> &visited,int par, int node)
    {
        visited[node] = true;
        for(int i = 0; i<adj[node].size(); i++)
        {
            if(!visited[adj[node][i]])
            {
                if(dfscheck(adj,visited,node,adj[node][i]))
                {
                    return true;
                }
            }
            else
            {
                if(adj[node][i]!=par)
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<bool> visited(V,false);
        vector<vector<int>> adj(V);
        for(int i = 0; i<edges.size(); i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        bool tmp = false;
        for(int i = 0; i<V ; i++)
        {
            if(!visited[i])
            {
                tmp = dfscheck(adj,visited,-1,i);
            }
            if(tmp)
            {
                return true;
            }
        }
        return false;
    }
};