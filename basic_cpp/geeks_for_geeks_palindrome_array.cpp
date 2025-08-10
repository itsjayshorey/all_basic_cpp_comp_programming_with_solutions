#include <vector>
#include <iostream>
using namespace std;

class Solution {
  public:
    bool isPerfect(vector<int> &arr) {
        // code here
        int sz = arr.size();
        for(int i = 0;i<sz/2;i++)
        {
            if(arr[i]!=arr[sz-i-1])
            {
                return false;
            }
        }
        return true;
    }
};
