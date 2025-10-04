// User function Template for C++
#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int maximumPath(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> ans(n,vector<int> (m,0));
        for(int i = 0; i< n; i++)
        {
            for(int j = 0; j <m ; j++)
            {
                int k = 0;
                int r = 0;
                int di = 0;
                if(i-1>=0)
                {
                    k+=ans[i-1][j];
                }
                if(j-1>=0)
                {
                    // r+=ans[i][j-1];
                    if(i-1>=0)
                    {
                        di+=ans[i-1][j-1];
                    }
                }
                if(j+1<m)
                {
                    if(i-1>=0)
                    {
                        r+=ans[i-1][j+1];
                    }
                }
                int l = max(r,k);
                ans[i][j] = max(l,di)+mat[i][j];
            }
        }
        int answer = 0;
        for(int j = 0; j <m ;j++)
        {
            answer = max(answer,ans[n-1][j]);
        }
        return answer;
    }
};