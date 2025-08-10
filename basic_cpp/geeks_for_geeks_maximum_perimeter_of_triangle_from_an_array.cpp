#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
class Solution {
  public:
    int maxPerimeter(vector<int> &arr) {
        // code here.
        int sz = arr.size();
        sort(arr.begin(),arr.end());
        for(int i = sz-1;i>1;i--)
        {
            if(arr[i]<(arr[i-1]+arr[i-2]))
            {
                return (arr[i]+arr[i-1]+arr[i-2]);
            }
        }
        return -1;
    }
};