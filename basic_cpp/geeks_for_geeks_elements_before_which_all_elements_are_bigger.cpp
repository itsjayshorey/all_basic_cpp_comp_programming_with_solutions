#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int countElements(vector<int>& arr) {
        // code here
        int max = -1;
        int sz = arr.size();
        int ans = 0;
        for(int i=0;i<sz;i++)
        {
            if(arr[i]>max)
            {
                ans=ans+1;
                max = arr[i];
            }
        }
        return ans;
    }
};
