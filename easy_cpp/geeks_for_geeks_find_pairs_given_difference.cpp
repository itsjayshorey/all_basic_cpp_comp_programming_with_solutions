#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
        int pt1 = 0;
        int pt2 = 1;
        int sz = arr.size();
        sort(arr.begin(),arr.end());
        int temp;
        while((pt1<sz) && (pt2<sz))
        {
            temp = arr[pt2]-arr[pt1];
            if(temp>x)
            {
                pt1++;
            }
            else if(temp<x)
            {
                pt2++;
            }
            else
            {
                if(pt1!=pt2)
                {
                     return true;
                }
                if(pt1==pt2)
                {
                    pt2++;
                }
            }
        }
        return false;
    }
};
