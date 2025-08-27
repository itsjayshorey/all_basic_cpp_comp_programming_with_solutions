#include <vector>
#include <algorithm>
using namespace std;
class Solution {
  public:
    int countTriangles(vector<int>& arr) {
        // code here
        int end = arr.size() - 1;
        int pt;
        if(end<2)
        {
            return 0;
        }
        int ans = 0;
        sort(arr.begin(),arr.end());
        for(int i = end;i>1;i--)
        {
            for(int j = i-1;j>0;j--)
            {
                pt = (j-1);
                while((pt>=0)&&((arr[pt] + arr[j]) > arr[i]))
                {
                    ans++;
                    pt--;
                }
            }
        }
        return ans;
    }
};
