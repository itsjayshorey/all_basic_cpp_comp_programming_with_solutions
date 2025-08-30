// User function Template for C++
#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    vector<vector<int>> ans;
    void Recurrsion(int i, int j,vector<int> path,int n, int m, vector<vector<int>> &grid)
    {
        if((i==n-1) && (j==m-1))
        {
            path.push_back(grid[i][j]);
            ans.push_back(path);
        }
        else if((i==n-1))
        {
            path.push_back(grid[i][j]);
            Recurrsion(i,j+1,path,n,m,grid);
        }
        else if((j==m-1))
        {
            path.push_back(grid[i][j]);
            Recurrsion(i+1,j,path,n,m,grid);
        }
        else
        {
            path.push_back(grid[i][j]);
            Recurrsion(i+1,j,path,n,m,grid);
            Recurrsion(i,j+1,path,n,m,grid);
        }
    }
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        vector<int> path;
        Recurrsion(0,0,path,n,m,grid);
        return ans;
    }
};