#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
  public:
    bool formatArray(vector<int> &arr) {
        // code here.
        int sz = arr.size();
        sort(arr.begin(),arr.end());
        int common = 0;
        for(int i = 0; i<sz ; i++)
        {
            while(arr[i]==arr[i+1])
            {
                common = common + 1;
                i++;
            }
            if(common>=sz/2)
            {
                return false;
            }
            common = 0;
        }
        return true;
    }
};