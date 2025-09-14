#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int lrg = arr[0];
        int lrg2 = arr[1];
        if(lrg>lrg2)
        {
            swap(lrg,lrg2);
        }
        for(int i = 2 ; i<arr.size() ; i++)
        {
            if(arr[i]>lrg2)
            {
                lrg = lrg2;
                lrg2 = arr[i];
            }
            else if(arr[i]>lrg && arr[i]!=lrg2)
            {
                lrg = arr[i];
            }
        }
        if(lrg==lrg2)
        {
            return -1;
        }
        else
        {
            return lrg;
        }
    }
};