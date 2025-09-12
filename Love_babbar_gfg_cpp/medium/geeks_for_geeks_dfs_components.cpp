#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    vector<int> dfscomp(vector<vector<int>> &adj, int k, vector<bool> &visited)
    {
        vector<int> temp;
        visited[k] = true;
        temp.push_back(k);
        vector<int> tp;
        for(int i = 0; i<adj[k].size(); i++)
        {
            if(!visited[adj[k][i]])
            {
                tp = dfscomp(adj,adj[k][i],visited);
                temp.insert(temp.end(),tp.begin(),tp.end());
            }
        }
        return temp;
    }
    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> ans;
        vector<vector<int>> adj(V);
        vector<bool> visited(V,false);
        for(int i = 0; i<edges.size(); i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> temp;
        for(int i = 0; i<V;i++)
        {
            if(!visited[i])
            {
                temp = dfscomp(adj,i,visited);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
