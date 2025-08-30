#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution {
  public:
    #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX], int row, int col) {
        // Your code here
        vector<int> current;
        vector<vector<int>> ans;
        map<vector<int>,int> mp1;
        for(int i = 0;i<row;i++)
        {
            current.clear();
            for(int j = 0;j<col;j++)
            {
                current.push_back(M[i][j]);
            }
            mp1[current]++;
        }
        for(int i = 0;i<row;i++)
        {
            current.clear();
            for(int j = 0;j<col;j++)
            {
                current.push_back(M[i][j]);
            }
            if(mp1[current]>0)
            {
                ans.push_back(current);
                mp1[current] = 0;
            }
        }
        return ans;
    }
};