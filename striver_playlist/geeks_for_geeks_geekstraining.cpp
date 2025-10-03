#include <vector>
#include <algorithm>
using namespace std;
class Solution {
  public:
    int maximumPoints(vector<vector<int>>& arr) {
        // Code here
        int n = arr.size();
        vector<vector<int>> fdp(n,vector<int>(3,-1));
        int current;
        int i = 0;
        for(int k = 0; k < 3 ; k++)
        {
            fdp[0][k] = arr[0][k];
        }
        i++;
        while(i<n)
        {
            for(int j = 0; j <3 ; j++)
            {
                for(int k = 0; k<3;k++)
                {
                    if(j!=k)
                        fdp[i][j] = max(fdp[i][j],fdp[i-1][k]+arr[i][j]);
                }
            }
            i++;
        }
        int ans = 0;
        for(int m = 0; m <3 ; m++)
        {
            ans = max(ans,fdp[n-1][m]);
        }
        return ans;
    }
};