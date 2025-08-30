#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        int sz = mat.size();
        vector<bool> every_one_knows(mat.size(),true);
        // vector<int> 
        vector<int> ppl_know(mat.size(),0);
        for(int i = 0; i < mat.size(); i++)
        {
            for(int j = 0;j<mat[i].size();j++)
            {
                every_one_knows[j] = every_one_knows[j] * mat[i][j];
                // return ppl_know[j];
                
                ppl_know[i] = ppl_know[i] + mat[i][j]; 
            }

        }
        for(int i = 0; i<mat.size() ; i++)
        {
            if(every_one_knows[i])
            {
                if(ppl_know[i]==1)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};