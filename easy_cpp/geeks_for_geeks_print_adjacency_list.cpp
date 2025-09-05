#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        // Code here
        vector<int> temp;
        vector<vector<int>> ans(V,temp);
        for(int i = 0; i<edges.size();i++)
        {
            ans[edges[i].first].push_back(edges[i].second);
            ans[edges[i].second].push_back(edges[i].first);
        }
        return ans;
    }
};