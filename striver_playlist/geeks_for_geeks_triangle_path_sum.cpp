#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int minPathSum(vector<vector<int>>& triangle) {
        // Code here
        vector<vector<int>> ans;
        int n = triangle.size();
        // int m = triangle[n-1].size();
        for(int i= 0 ; i < n ; i++)
        {
                vector<int> temp(i+1,0);
                ans.push_back(temp);
        }
        for(int i = 0; i<n;i++)
        {
            for(int j = 0; j<i+1 ; j++)
            {
                int up = INT_MAX;
                int lef = INT_MAX;
                if(i-1>=0)
                {
                    if(j<i) up=ans[i-1][j];
                    if(j-1>=0)
                    {
                        lef=ans[i-1][j-1];
                    }
                }
                if(up == INT_MAX && lef == INT_MAX)
                {
                    ans[i][j] = triangle[i][j];
                }
                else
                {
                    ans[i][j] = triangle[i][j] + min(up,lef);
                }
            }
        }
        int answer = INT_MAX;
        for(int i = 0; i<n ;i++)
        {
            answer = min(ans[n-1][i],answer);
        }
        return answer;
    }
};