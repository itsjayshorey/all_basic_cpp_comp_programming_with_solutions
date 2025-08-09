#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// User function template for C++
class Solution {
  public:

    int maxProduct(vector<int>& arr) {
        // code here
        int max1 = -1;
        int max2 = -1;
        int pos1 = 0;
        int sz = arr.size();
        for(int i = 0;i<sz;i++)
        {
            if(max1<=arr[i])
            {
                max1 = arr[i];
                pos1 = i;
            }
        }
        for(int i = 0;i<sz;i++)
        {
            if(max2<=arr[i])
            {
                if(i!=pos1)
                {
                    max2 = arr[i];
                }
            }
        }
        return (max1 * max2);
    }
};