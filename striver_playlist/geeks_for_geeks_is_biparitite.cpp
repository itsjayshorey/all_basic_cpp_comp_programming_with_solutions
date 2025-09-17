#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Solution {
  public:
    bool isBipartite(int V, vector<vector<int>> &edges) {
        // Code here
        vector<int> color(V,-1);
        vector<int> tp;
        vector<vector<int>> adj(V,tp);
        for(int i = 0 ; i<edges.size(); i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        queue<int> q;
        int current;
        int clr;
        for(int i = 0; i<V ; i++)
        {
            if(color[i]==-1)
            {
                q.push(i);
                color[i] = 0;
                while(!q.empty())
                {
                    current = q.front();
                    clr = color[current];
                    q.pop();
                    for(int j = 0 ; j<adj[current].size(); j++)
                    {
                        if(color[adj[current][j]]==-1)
                        {
                            if(clr==0)
                            {
                                color[adj[current][j]] = 1;
                            }
                            else
                            {
                                color[adj[current][j]] = 0;
                            }
                            q.push(adj[current][j]);
                        }
                        else
                        {
                            if(color[adj[current][j]]==clr)
                            {
                                return false;
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
};