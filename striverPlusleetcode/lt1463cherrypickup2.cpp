#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int solvedp(vector<vector<int>>& grid, vector<vector<vector<int>>>& ans, int i, int j,int r,int &n, int &m)
    {
        if(i<0 || i>=m || j<0 || j>=m)
        {
            return 0;
        }
        if(ans[r][i][j]!=-1) return ans[r][i][j];
        int curr = grid[r][j];
        if(i!=j)
        {
            curr+=grid[r][i];
        }
        if(r==n-1)return curr;
        int maxi = 0;
        for(int op = -1 ; op<=1 ; op++)
        {
            for(int oc = -1; oc<=1 ; oc++)
            {
                maxi = max(maxi,solvedp(grid,ans,i+op,j+oc,r+1,n,m));
            }
        }
        ans[r][i][j] = maxi + curr;
        return ans[r][i][j];
    }
    int cherryPickup(vector<vector<int>>& grid) {
        // int r = grid.size(); 
        int l = 0;
        int m = grid[0].size();
        int n = grid.size();
        vector<vector<vector<int>>> ans(n,vector<vector<int>>(m,vector<int> (m,-1)));
        int i = 0;
        int j = m-1;
        int r = 0;
        return solvedp(grid,ans,i,j,r,n,m);
    }
};