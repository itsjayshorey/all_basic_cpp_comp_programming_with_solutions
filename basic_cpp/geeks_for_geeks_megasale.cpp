#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:

    int maxProfit(int m, vector<int> &arr) {
        // Your code goes here.
        sort(arr.begin(),arr.end());
        int ans = 0;
        for(int i = 0;i<m;i++)
        {
            if(arr[i]>=0)
            {
                break;
            }
            ans=ans+arr[i];
        }
        return ans*-1;
    }
};