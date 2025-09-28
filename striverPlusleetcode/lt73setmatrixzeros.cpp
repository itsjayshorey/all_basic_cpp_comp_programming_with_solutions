#include <vector>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> x;
        vector<int> y;
        for(int i = 0; i <matrix.size(); i++)
        {
            for(int j = 0; j<matrix[0].size(); j++)
            {
                if(matrix[i][j]==0)
                {
                    x.push_back(i);
                    y.push_back(j);
                    // break;
                }
            }
        }
        int ind;
        for(int i = 0; i<x.size();i++)
        {
            ind = x[i];
            for(int k = 0 ; k<matrix[0].size(); k++)
            {
                matrix[ind][k]=0;
            }
        }
        for(int j = 0; j<y.size();j++)
        {
            ind = y[j];
            for(int k = 0 ; k<matrix.size();k++)
            {
                matrix[k][ind]=0;
            }
        }
    }
};