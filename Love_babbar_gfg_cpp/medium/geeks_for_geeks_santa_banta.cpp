#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<bool> primes = vector<bool>(1e+6,true);
    vector<int> primes_n;
    void precompute() {
        for(int i = 2; i < 1e+6; i++)
        {
            if(primes[i]==true)
            {
                for(int j = i+i ; j<1e+6; j+=i)
                {
                    primes[j] = false;
                }
            }
        }
        primes_n.push_back(-1);
        // primes_n.push_back(-1);
        for(int i = 2; i < 1e+6; i++)
        {
            if(primes[i])
            {
                primes_n.push_back(i);
            }
        }
    }
    int dfs(int k, vector<vector<int>> &g, vector<vector<int>> &adj, vector<bool> &visited)
    {
        int cnt = 1;
        visited[k] = true;
        for(int i = 0; i < adj[k].size(); i++)
        {
            if(!visited[adj[k][i]])
            {
                cnt+=dfs(adj[k][i],g,adj,visited);
            }
        }
        return cnt;
    }
    int helpSanta(int n, int m, vector<vector<int>> &g) {
        // Code here
        vector<int> tp;
        vector<vector<int>> adj(n+1,tp);
        vector<bool> visited(n+1,false);
        int an = 0;
        for(int i = 0; i < m; i++)
        {
            adj[g[i][0]].push_back(g[i][1]);
            adj[g[i][1]].push_back(g[i][0]);
        }
        for(int j = 0; j<n+1;j++)
        {
            if(!visited[j])
            {
                an = max(an,dfs(j,g,adj,visited));
            }
        }
        if(an==1)
        {
            return -1;
        }
        else
        {
            return primes_n[an];
        }
    }
};