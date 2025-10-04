#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> ans(n,vector<int> (m,0));
        for(int i = 0; i < n ; i++)
        {
            for(int j = 0; j<m ; j++)
            {
                int l = INT_MAX;
                int u = INT_MAX;
                int r = INT_MAX;
                if(i-1>=0)
                {
                    if(j-1>=0)
                        l = ans[i-1][j-1];
                    if(j+1<n)
                        r = ans[i-1][j+1];
                    u = ans[i-1][j];
                }
                if(l==INT_MAX && r==INT_MAX && u==INT_MAX)
                {
                    ans[i][j] = matrix[i][j];
                } 
                else
                {
                    int op = min(l,r);
                    ans[i][j] = matrix[i][j] + min(op,u);
                }
            }
        }
        int answer = INT_MAX;
        for(int i = 0; i<m ; i++)
        {
            answer = min(ans[n-1][i],answer);
        }
        return answer;
    }
};