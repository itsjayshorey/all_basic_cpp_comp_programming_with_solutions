#include <vector>
#include <iostream>
using namespace std;
class Solution {
  public:
    vector<int> rowSum(vector<vector<int>>& mat) {
        // Code here
        vector<int> ans;
        int an;
        for(int i = 0; i<mat.size(); i++)
        {
            an = 0;
            for(int j = 0; j<mat[i].size(); j++)
            {
                an = an+mat[i][j];
            }
            ans.push_back(an);
        }
        return ans;
    }
};
