#include <vector>

using namespace std;
class Solution {
public:
    int rec(vector<vector<int>>& ans,vector<vector<bool>>& ans2,int i,int j,int &n,int &m,vector<vector<int>>&obstacleGrid)
    {
        if(n<=i || i<0)
        {
            return 0;
        }
        if(m<=j || j<0)
        {
            return 0;
        }
        if(obstacleGrid[i][j]==1)return 0;
        if(!ans2[i][j])
        {
            ans[i][j] = rec(ans,ans2,i-1,j,n,m,obstacleGrid)+rec(ans,ans2,i,j-1,n,m,obstacleGrid);//[i-1][j] + ans[i][j-1];
            ans2[i][j] = true;
            // return ans[i][j];
        }
        return ans[i][j];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        if(obstacleGrid[0][0]==1)
        {
            return 0;
        }
        else if(obstacleGrid[n-1][m-1] == 1)
        {
            return 0;
        }
        vector<vector<int>> ans(n,vector<int>(m,0));
        vector<vector<bool>> ans2(n,vector<bool>(m,false));
        ans2[0][0]=true;
        ans[0][0]=1;
        return rec(ans,ans2,n-1,m-1,n,m,obstacleGrid);
    }
};