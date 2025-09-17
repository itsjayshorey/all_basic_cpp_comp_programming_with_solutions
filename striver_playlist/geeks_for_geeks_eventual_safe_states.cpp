// User function Template for C++
#include <vector>
#include <iostream>
using namespace std;
class Solution {
  public:
    bool dfsc(vector<int> adj[], vector<bool> &visited, vector<bool> &pathvisited, vector<bool> &safenode,int node)
    {
        if(pathvisited[node])
        {
            safenode[node] = false;
            return false;
        }
        if(visited[node])
        {
            return safenode[node];
        }
        visited[node] = true;
        pathvisited[node] = true;
        bool an = true;
        for(int i = 0; i<adj[node].size(); i++)
        {
            if(!dfsc(adj , visited, pathvisited , safenode, adj[node][i]))
            {
                an = false;
            }
        }
        if(!an)
        {
            safenode[node]=false;
        }
        pathvisited[node] = false;
        return an;
    }
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        vector<bool> visited(V,false);
        vector<bool> pathvisited(V,false);
        vector<bool> safenode(V,true);
        vector<int> ans;
        for(int i = 0; i<V ; i++)
        {
            if(!visited[i])
            {
                dfsc(adj,visited,pathvisited,safenode,i);
            }
        }
        for(int i = 0; i<V; i++)
        {
            if(safenode[i])
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
