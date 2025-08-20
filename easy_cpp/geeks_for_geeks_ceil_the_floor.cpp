// User code template
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        int left = -1;//lower
        long right = 10000000;//upper
        for(int i = 0;i<arr.size() ;i++)
        {
            if(arr[i] >= x && arr[i]<right)
            {
                right = arr[i];
            }
            if(arr[i] <= x && arr[i]>left)
            {
                left = arr[i];
            }
        }
        vector<int> ans;
        ans.push_back(left);
        if(right == 10000000)
        {
            ans.push_back(-1);
        }
        else
        {
            ans.push_back(int(right));
        }
        return ans;
    }
};