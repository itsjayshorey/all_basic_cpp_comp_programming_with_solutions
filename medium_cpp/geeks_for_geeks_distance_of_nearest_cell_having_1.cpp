#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Solution {
  public:
    // Function to find distance of nearest 1 in the grid for each cell.
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        // Code here
        vector<vector<int>> ans;
        vector<int> temp;
        queue<vector<int>> q;
        vector<int> tmp;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited (n,vector<int>(m,0));
        for(int i = 0;i<n;i++)
        {
            temp.clear();
            for(int j = 0;j<m;j++)
            {
                temp.push_back(0);
                if(grid[i][j]==1)
                {
                    tmp.clear();
                    tmp.push_back(i);
                    tmp.push_back(j);
                    tmp.push_back(0);
                    q.push(tmp);
                    visited[i][j]++;
                }
            }
            ans.push_back(temp);
        }
        vector<int> topi;
        tmp = {0,0,0};
        while(!q.empty())
        {
            topi = q.front();
            q.pop();
            if(topi[0]+1<n)
            {
                tmp[0] = topi[0]+1;
                tmp[1] = topi[1];
                tmp[2] = topi[2]+1;
                if(!visited[tmp[0]][tmp[1]])
                {
                    ans[tmp[0]][tmp[1]] = tmp[2];
                    q.push(tmp);
                    visited[tmp[0]][tmp[1]]++;
                }
            }
            if(topi[0]-1>=0)
            {
                tmp[0] = topi[0]-1;
                tmp[1] = topi[1];
                tmp[2] = topi[2]+1;
                if(!visited[tmp[0]][tmp[1]])
                {
                    ans[tmp[0]][tmp[1]] = tmp[2];
                    q.push(tmp);
                    visited[tmp[0]][tmp[1]]++;
                }
            }
            if(topi[1]+1<m)
            {
                tmp[0] = topi[0];
                tmp[1] = topi[1]+1;
                tmp[2] = topi[2]+1;
                if(!visited[tmp[0]][tmp[1]])
                {
                    ans[tmp[0]][tmp[1]] = tmp[2];
                    q.push(tmp);
                    visited[tmp[0]][tmp[1]]++;
                }
            }
            if(topi[1]-1>=0)
            {
                tmp[0] = topi[0];
                tmp[1] = topi[1]-1;
                tmp[2] = topi[2]+1;
                if(!visited[tmp[0]][tmp[1]])
                {
                    ans[tmp[0]][tmp[1]] = tmp[2];
                    q.push(tmp);
                    visited[tmp[0]][tmp[1]]++;
                }
            }
        }
        return ans;
    }
};