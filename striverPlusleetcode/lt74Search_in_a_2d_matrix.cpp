#include <vector>
using namespace std;
class Solution {
public:
    void binarySearch(vector<vector<int>>& matrix, bool &ans,int strt, int end, int m, int& target)
    {
        if(strt>end)
        {
            return;
        }
        int mid = (end+strt)/2;
        if(ans)return;
        if(matrix[mid/m][mid%m]>target)
        {
            binarySearch(matrix, ans, strt,mid-1,m,target);
        }
        else if(matrix[mid/m][mid%m]<target)
        {
            binarySearch(matrix, ans, mid+1,end,m,target);
        }
        else
        {
            ans = true;
            return;
        }

    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        bool ans = false;
        int strt = 0;
        int end = n*m-1;
        binarySearch(matrix,ans,strt,end,m,target);
        return ans;
    }
};