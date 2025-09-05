#include <vector>
#include <queue>
#include <set>
using namespace std;
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        vector<int> ans;
        queue<int> q;
        set<int> col;
        q.push(0);
        // col.insert(0);
        int curr;
        while(!q.empty())
        {
            curr = q.front();
            q.pop();
            if(col.find(curr)==col.end())
            {
                ans.push_back(curr);
                col.insert(curr);
                for(int i = 0; i<adj[curr].size() ; i++)
                {
                    q.push(adj[curr][i]);
                }
            }
        }
        return ans;
    }
};