#include <vector>
using namespace std;

class Solution {
  public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>> arr, int n) {

        // Your code here
        int ans = -1;
        int max_zeros = 0;
        for(int i = 0;i<n;i++)
        {
            int cur = 0;
            for(int j = 0; j<n;j++)
            {
                if(arr[j][i]==0)
                {
                    cur++;
                }
            }
            if(cur>max_zeros)
            {
                max_zeros = cur;
                ans = i;
            }
        }
        return ans;
    }
};