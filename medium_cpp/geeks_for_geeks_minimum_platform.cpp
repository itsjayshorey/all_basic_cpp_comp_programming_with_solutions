#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        int n = arr.size();
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        int i = 0;
        int j = 0;
        int current_t = 0;
        int max_t = 0;
        while(i<n && j<n)
        {
            if(arr[i]<=dep[j])
            {
                i++;
                current_t++;
                max_t = max(max_t,current_t);
            }
            else
            {
                j++;
                current_t--;
            }
        }
        return max_t;
    }
};
