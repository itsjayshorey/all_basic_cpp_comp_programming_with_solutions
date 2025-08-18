#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int findMagicalNumber(vector<int>& arr) {
        // code here
        int ans = -1;
        for(int i = 0 ;i<arr.size();i++)
        {
            if(arr[i]==i)
            {
                return i;
            }
        }
        return ans;
    }
};