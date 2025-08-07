#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int countPairs(vector<int>& arr1, vector<int>& arr2, int x) {
        // code here
        int sz1 = arr1.size();
        int sz2 = arr2.size()-1;
        int i = 0;
        int ans = 0;
        int cur_sum = 0;
        while(sz2>=0 && i<sz1)
        {
            cur_sum = (arr1[i]+arr2[sz2]);
            if(x==cur_sum)
            {
                i++;
                sz2--;
                ans++;
            }
            else if(x<cur_sum)
            {
                sz2--;
            }
            else
            {
                i++;
            }
        }
        return ans;
    }
};