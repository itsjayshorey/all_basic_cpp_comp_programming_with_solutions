#include <vector>
#include <queue>
using namespace std;
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>> adj(n);
        vector<int> tmp;
        for(int i = 0 ; i<flights.size(); i++)
        {
            tmp = flights[i];
            adj[tmp[0]].push_back({tmp[1],tmp[2]});
        }
        queue<vector<int>> q;
        vector<int> cost(n,INT_MAX);
        cost[src] = 0;
        q.push({0,src,0});
        int ki,node,cst;
        pair<int,int> temp;
        while(!q.empty())
        {
            tmp = q.front();
            q.pop();
            ki = tmp[0];
            node = tmp[1];
            cst = tmp[2];
            for(int i = 0; i < adj[node].size(); i++)
            {
                temp = adj[node][i];
                if(cost[temp.first]>=temp.second+cst && ki<=k)
                {
                    cost[temp.first] = temp.second+cst;
                    q.push({ki+1,temp.first,cost[temp.first]});
                }
            }
        }
        if(cost[dst]==INT_MAX) return -1;
        return cost[dst];
    }
};