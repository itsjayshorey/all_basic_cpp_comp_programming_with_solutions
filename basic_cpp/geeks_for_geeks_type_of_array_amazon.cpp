#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int maxNtype(vector<int>& arr) {
        // code here.
        int asc = 0;
        int dec = 0;
        int sz = arr.size();
        
        for(int i = 0; i<sz-1;i++)
        {
            if(arr[i]<arr[i+1])
            {
                asc = asc +1;
            }
            else
            {
                dec = dec + 1;
            }
        }

        if(asc>1)
        {
            if(dec==0)
            {
                return 1;
            }
            else
            {
                return 4;
            }
        }
        else
        {
            if(asc == 0)
            {
                return 2;
            }
            else
            {
                return 3;
            }
        }
    }
};