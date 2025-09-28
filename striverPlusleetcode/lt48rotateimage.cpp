// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         vector<vector<int>> copy = matrix;
//         for(int i = 0; i<n ; i++)
//         {
//             for(int j = 0; j<n;j++)
//             {
//                 matrix[j][n-1-i]=copy[i][j];
//             }
//         }
//     }
// };

//optimized version 
//for space complexity
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // transpose
        for(int i=0; i<n;i++)
        {
            for(int j = n-1-i; j>=0 ; j--)
            {
                swap(matrix[i][j],matrix[n-j-1][n-i-1]);
            }
        }
        reverse(matrix.begin(),matrix.end());
    }
};