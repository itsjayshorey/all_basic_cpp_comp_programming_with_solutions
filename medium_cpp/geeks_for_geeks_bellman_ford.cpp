// User function Template for C++
#include <vector>
using namespace std;
class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        // Code here
        vector<int> dist(V, 1e8);
        dist[src] = 0;
        for(int i = 0;i<V-1;i++)
        {
            for(int i = 0; i<edges.size(); i++)
            {
                if(dist[edges[i][0]]==1e8)continue;
                if(dist[edges[i][1]]>dist[edges[i][0]]+edges[i][2])
                {
                    dist[edges[i][1]] = dist[edges[i][0]]+edges[i][2];
                    // cout<<edges[i][2]<<" ";
                }
            }
        }
        for(int i = 0; i<edges.size(); i++)
        {
            if(dist[edges[i][0]]==1e8)continue;
            if(dist[edges[i][1]]>dist[edges[i][0]]+edges[i][2])
            {
                return {-1};
            }
        }
        return dist;
    }
};
